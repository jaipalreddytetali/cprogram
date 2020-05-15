#include<stdio.h>
int prime(int n, int i)
{
    if(i == 1)
        return 1;
    else
    {
        if(n%i == 0)
            return 0;
        else
            prime(n, i-1);
    }
}
void main()
{
    int num,count;
    printf("Enter a number: ");
    scanf("%d", &num);
    count =prime(num, num/2);
    if(count== 1)
        printf("%d is a prime number", num);
    else
        printf("%d is a not prime number", num);
}
