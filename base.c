#include<stdio.h>
void main()
{
	int num,index,i=0,a[20];
	char b[20];
	printf("enter the decimal number\n");
	scanf("%d",&num);
	printf("enter the index\n");
	scanf("%d",&index);
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
		if (a[i]<10)
		{
			b[i]=a[i]+'0';
		}
		else
		{
			b[i]=a[i]+55;
		}
		printf("%c",b[i]);
		i--;
	}
}
