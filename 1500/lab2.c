#include<stdio.h>

int main (void)
{
double temph,tempm,tempt,freezer;
printf("Please put in the hour, then a space, then the minutes since the power failure \n");
scanf("%lf",&temph);
scanf("%lf",&tempm);
tempt=(temph+(tempm/60));
//printf("This is the time: %.2lf",tempt);
freezer=(((4*(tempt*tempt))/(tempt+2))-20);
printf("The freezer temp is: %.2lf \n",freezer);



return 0;
}
