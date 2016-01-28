#include<stdio.h>
void main()
{
	int num,index,i=0,a[20];
	printf("enter the decimal number\n");
	scanf("%d",&num);
	printf("enter the index\n");
	scanf("%d",&index);
	if(num<index)
	{
		printf("the answer is %d",num);
	}
	else
	{
		while(num>=index)
		{
			a[i]=num%index;
			num=num/index;
			i++;
		}
		a[i]=num;
		printf("the answer is\n");
		while(i>=0)
		{
			printf("%d",a[i]);
			i--;
		}
	}
}
