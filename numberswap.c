#include<stdio.h>
void main()
{
	int n,m,count=0,sum=0,half,i,temp,a[10];
	printf("enter the number:\n");
	scanf("%d",&n);
	m=n;
	while(m!=0)
	{
		m=m/10;
		count++;
	}
	half=count/2;
	m=n;
	for(i=count-1;i>=0;i--)
	{
		a[i]=m%10;
		m=m/10;
	}
	if (count%2==0)
	{
		for(i=0;i<half;i++)
		{
			temp=a[i];
			a[i]=a[i+half];
			a[i+half]=temp;
		}
	}
	else
	{
		for(i=0;i<half;i++)
		{
			temp=a[i];
			a[i]=a[i+half+1];
			a[i+half+1]=temp;
		}
	}
	for(i=0;i<count;i++)
	{
		sum=(sum*10)+a[i];
	}
	printf("\nthe number with lower and higher half digits swapped is\n%d",sum);
}
