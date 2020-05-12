#include <stdio.h>
void main() 
{
    double x, y;
    printf("Enter first number  x:");
    scanf("%lf", &x);
    printf("Enter second number y:");
    scanf("%lf", &y);

    // code to swap x and y
	  x=x-y;		//  x =(initial x - initial y)
  	y=x+y;		// y = (initial x - initial y) + initial y = initial x
    x=y-x;		// x = initial x - (initial x - initial y) = initial y
    printf("after swapping the value x= %lf\n", x);
    printf("after swapping the value y = %lf\n", y);
}
