#include <stdio.h>
#include <math.h>
int main(void) {
    double pi=3.14159;
    double a, b, e, S;
    printf("Enter the length of the egg(mm)\n");
    scanf("%lf",&a);
    printf("Enter the breadth of the egg (mm) \n");
    scanf("%lf",&b);
    a=a/2.0;
    b=b/2.0;
    e= sqrt(1.0-(b*b)/(a*a));
    S= 2.0*pi*b*b+((2*pi*a*b*asin(e))/e);
    printf("The surface area of thr egg is: %.3lf cm^2 \n", S/100);
    return 0;
}