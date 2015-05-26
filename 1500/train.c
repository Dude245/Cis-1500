#include <stdio.h>
int main(void) {
    int axels;
    double Sco,area,vel, Rr,weight;
    
    
    printf("Please input the number of axels: \n");
    scanf("%d",&axels);
    printf("Please input the weight of thr train car: \n");
    scanf("%lf",&weight);
    weight=weight/2000;
    printf("Please input the velocity of the train car: \n");
    scanf("%lf",&vel);
    printf("Please input the streamline coefficent: \n");
    scanf("%lf",&Sco);
    printf("Please input the cross sectional area for the train car:  \n");
    scanf("%lf",&area);
    
    
   
    printf("%d \n", axels);
    printf("%lf \n",weight);
    printf ("%lf \n",vel);
    printf ("%lf \n", Sco);
    printf ("%lf \n", area);
    
    
    Rr=(1.5*((18*axels)/weight))
    +(.03*vel)
    +((Sco*area*(vel*vel))/(10000*weight));
    
    
    printf("%.3lf \n",Rr);

    return 0;
}