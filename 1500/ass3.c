#include<stdio.h>
#include<math.h>

int main(void)
{
    double weight, height, bsa;
    printf("Please put in the weight in kilograms \n");
    scanf("%lf",&weight);
    printf("Please put int he height in Cm \n");
    scanf("%lf",&height);
    bsa=0.007184*
    pow(weight,0.425)*
    pow(height,0.725);
    //70 167 == 1.79
    printf("The BSA is %.2lf m^2\n",bsa);
    return 0;
}