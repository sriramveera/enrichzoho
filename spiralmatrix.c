#include<stdio.h>
void main()
{
	int a[5][5],i,j,r,c,m;
    printf("enter the no. of rows:\n");
    scanf("%d",&r);
    printf("enter the no. of cols:\n");
    scanf("%d",&c);
    printf("enter the elements:\n");
    for(i=0;i<r;i++)
    {
		for(j=0;j<c;j++)
    	{
    		scanf("%d",&a[i][j]);
    	}
    }
	printf("the input matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("the spiral matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=i;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		for(m=i+1,j=c-1;m<r;m++)
		{
			printf("%d\t",a[m][j]);
		}
		for(j=j-1,m=r-1;j>=i;j--)
		{
			printf("%d\t",a[m][j]);
		}
		for(m=m-1,j=i;m>i;m--)
		{
			printf("%d\t",a[m][j]);
		}

		r--;
		c--;
	}
}
