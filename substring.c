#include <stdio.h>
#include <string.h>

int main(void) 
{
    int i,j,length=0;
    char a[100];
    printf("enter the string:\n");
    scanf("%s",a);
    printf("longest substring =");
    for(i=0;i<strlen(a);i++)
    {
      for(j=0;j<i;j++)
      {
          if (a[i]==a[j])
            {
                break;
            }
          
      }
      if(i==j)
      {
          printf("%c",a[i]);
          length++;
      }
    
    }
    printf("\nlength=%d",length);
	
	return 0;
}

