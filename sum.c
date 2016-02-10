#include<stdio.h>
int add(int a,int b,int c)
{
	int sum;
	sum=a+b+c;
	return sum;
}
void main()
{
	int a,b,c,sum[3],sum1,sum2,sum3;
	printf("enter the three numbers:\t");
	scanf("%d%d%d",&a,&b,&c);
	sum[0]=a;
	sum[1]=b;
	sum[2]=c;
	sum1=a+b+c;
	sum2=add(a,b,c);
	sum3=sum[0]+sum[1]+sum[2];
	printf("sum of three variables =%d\n",sum1);
	printf("sum using array =%d\n",sum2);
	printf("sum using functions =%d\n",sum3);
}
