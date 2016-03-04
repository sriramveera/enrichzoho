#include<stdio.h>
void main()
{
	int a[10],size,i,value,index;
	printf("enter the array size:\n");
	scanf("%d",&size);
	printf("enter the elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array is\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter the element to be inserted:\n");
	scanf("%d",&value);
	printf("enter the index to be inserted:\n");
	scanf("%d",&index);
	for(i=size;i>index;i--)
	{
		a[i]=a[i-1];
	}
	a[index]=value;
	printf("the array after insertion of element is\n");
	for(i=0;i<=size;i++)
	{
		printf("%d\t",a[i]);
	}
}
