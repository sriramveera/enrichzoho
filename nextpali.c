#include<stdio.h>
void main()
{
	int n,m,r,i,sum;
	printf("enter the number:\n");
	scanf("%d",&n);
	n++;
	for(i=n;;i++)
	{	
		m=i;
		sum=0;
		while(m!=0)
		{
			r=m%10;
			sum=(sum*10)+r;
			m=m/10;
		}
		if(i==sum)
			break;
	}
	printf("the next palindrome is %d",i);

}
