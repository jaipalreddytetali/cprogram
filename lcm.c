#include<stdio.h>
int findlcm(int a, int b)
 {
    static int i = 1;
    if(i%a == 0 && i%b == 0)
    {
        return i;
    }
    else
    {
        i++;
        findlcm(a,b);
        return i;
    }
}
void main()
{
    int a, b;
    printf("Input first number: ");
    scanf("%d",&a);
    printf("Input second number: ");
    scanf("%d",&b);
    printf("LCM of %d and %d = %d", a, b, findlcm(a,b));
}
