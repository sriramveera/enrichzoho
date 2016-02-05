#include <stdio.h>

int main(void) 
{
    int n,i,count;
    printf("enter the number:\n");
    scanf("%d",&n);
    int m=n/2;
    while(n!=0)
        {
            count=0;
            for(i=1;i<=m;i++)
            {
                if((n+1)%i==0)
                {
                    count++;
                }
            }
            if(count==1)
                break;
            else
                n++;
        }
	printf("the next prime number is %d",n+1);
	return 0;
}
