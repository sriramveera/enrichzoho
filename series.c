#include<stdio.h>
void main()
{
	int n,s,d,i;
	printf("enter n:\n");
	scanf("%d",&n);
	printf("enter s:\n");
	scanf("%d",&s);
	printf("enter d:\n");
	scanf("%d",&d);
	printf("the A.P is ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",s+(i*d));
	}
	printf("\nthe G.P is ");
	for(i=1;i<=n;i++)
	{	
		printf("%d\t",s);
		s=s*d;
	}
}
