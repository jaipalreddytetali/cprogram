#include <stdio.h>
void main()
{
    int matrix[3][3],i,j,k=0,count=1,sum=0;
    int *ptr = matrix;    // Pointer to matrix[0]
    printf("input elements in the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)//i and j are used to print name of the index in element
        {
            printf("element -[%d],[%d] : ",i,j);
            scanf("%d", (ptr+k));//(ptr + k) is equivalent to &matrix[i][j]
            k++;
        }
    }
    printf("\nThe matrix is: \n");
    for(i=0;i<9;i++)
    {
         if(count%3==0)
         {
            // (ptr + i) is equivalent to &matrix[i][j]
            printf("%d   ", *(ptr + i));
            count++;//count variable is used to print three elements in one line
            printf("\n");
         }
         else
         {
            printf("%d   ", *(ptr + i));
            count++;
         }
    }

    for(i=0;i<9;i++)
    {
        if(i%4==0)
            sum=sum + *(ptr + i);
    }
    printf("\nsum of diagonal elements in the matrix: %d\n" ,sum);
}
