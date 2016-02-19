#include<stdio.h>
void main()
{	
	static int a[9][9];
	int i,j,m,n,count;
	a[1][2]=-1;
	a[4][6]=-1;
	a[5][5]=-1;
	a[6][2]=-1;
	for(i=1;i<8;i++)
	{
		for(j=1;j<8;j++)
		{
			count=0;
			if(a[i][j]==-1)
			{
				continue;
			}
			else
			{
				for(m=i-1;m<=i+1;m++)
				{
					for(n=j-1;n<=j+1;n++)
					{
						if(a[m][n]==-1)
						{
							count++;
						}
					}

				}
			}

		a[i][j]=count;	
		}
	}
	for(i=1;i<8;i++)
	{
		for(j=1;j<8;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
}
