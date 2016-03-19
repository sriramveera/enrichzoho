#include<stdio.h>
void main()
{
	int n,m,i,r,count=0,sum=0,half;
	printf("enter the number:\n");
	scanf("%d",&n);
	m=n;
	while(m!=0)
	{
		m=m/10;
		count++;
	}
	half=count/2;
	for(i=1;i<=half;i++)
	{
		r=n%10;
		m=m*10+r;
		n=n/10;
	}
	for(i=1;i<=half;i++)
	{
		r=m%10;
		sum=sum*10+r;
		m=m/10;		

	}
	if (count%2==0)
	{
		printf("\n%d%d",sum,n);
	}
	else
	{
		r=n%10;
		n=n/10;		
		printf("\n%d%d%d",sum,r,n);
	}
}
