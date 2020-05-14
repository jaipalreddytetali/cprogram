#include <stdio.h>
void main()
{
    int i,n,j;
    printf("enter no of stairs you need: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
          for(j=0;j<=i;j++)
            {
                printf("01");
            }
        printf("\n");
       }
}
