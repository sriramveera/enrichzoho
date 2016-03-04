#include<stdio.h>
void main()
{
	int a[20],size,i,x,index;
	printf("enter the array size:\n");
	scanf("%d",&size);
	printf("enter the elements in ascending order:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter x:\n");
	scanf("%d",&x);
	for(i=0;;i++)
	{
		if (a[i]>x)
		{
			break;
		}
	}
	if (i==size)
	{
		printf("\nindex is %d",-1);
	}
	else 
	{
		printf("index is %d",i);
	}
	
}
