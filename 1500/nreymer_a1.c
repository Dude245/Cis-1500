#include <stdio.h>
/*
 * Created by: Nathan Reymer, nreymer, 0797359
 */
int main(void) {
    int axels;
    //Declare Variables, not war
    double Sco,area,vel, Rr,weight;
    
    //Get input for # of axels
    printf("Please input the number of axels: \n");
    scanf("%d",&axels);
    
    //Get input for weight
    printf("Please input the weight of the train car (lbs): \n");
    scanf("%lf",&weight);
    //Change weight from lbs to short tons
    weight=weight/2000;
    
    //Get input for velocity
    printf("Please input the velocity of the train car(mph): \n");
    scanf("%lf",&vel);
    
    //Get input for Streamline CoEffecint 
    printf("Please input the streamline coefficent: \n");
    scanf("%lf",&Sco);
    
    //Get input for area
    printf("Please input the cross sectional area for the train car(sqft):  \n");
    scanf("%lf",&area);
    
    
    //Sub values into nice confusing formula
    Rr=(1.5*((18*axels)/weight))
    +(.03*vel)
    +((Sco*area*(vel*vel))/(10000*weight));
    
    
    //Print the valie of the Rolling Resistance to 3 decimal places
    printf("The rolling resistance is: %.3lf \n",Rr);
    
    return 0;
}