#include<stdio.h>
void  main()
{
	int n,i,j,a[10][10];
	printf("enter the no. of lines of triangle:\n");
	scanf("%d",&n);
	for(i=0,j=0;i<n;i++)
	{
		a[i][j]=1;
		a[i][i]=1;
	}
	for(i=2;i<n;i++)
	{
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	printf("the triangle is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
