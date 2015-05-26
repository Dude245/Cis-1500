/*Nathan Reymer 0797359
 Assignment #2
 October 10th 2012
 Formulas from assignment 2 sheet
 */
//Add all needed libraries
#include<stdio.h>
#include<math.h>
//Add library for killing program
#include<stdlib.h>

int main(void) {
    //Declare all my variables
    double quan, fixed, unitC, cc, eoq, TIC, TAOC, annum;
    //Integer for the counter
    int count;
    //Print user friendly prompt
    printf("Please put in the quantity per annum : \n");
    //Get user info
    scanf("%lf", &quan);
    count = 0;
    //Check to see if its 0 or below
    while (quan <= 0) {
        count++;
        //Escape clause while re-running
        if (quan > 0) {
            break;
        }
        //Display instructions again
        if (quan <= 0) {
            printf("Lets try that again\n");
            printf("Please put in the quantity per annum: \n");
            scanf("%lf", &quan);
        }
        //Kick out after 4 attempts
        if (count == 4) {
            printf("No no no, try running it again \n");
            abort();
        }
    }

    //Display User prompt
    printf("Please put in the fixed cost: \n");
    //Take data
    scanf("%lf", &fixed);
    count = 0;
    //Check data
    while (fixed <= 0) {
        count++;
        if (fixed > 0) {
            break;
        }
        if (fixed <= 0) {
            printf("Lets try that again\n");
            printf("Please put in the fixed cost: \n");
            scanf("%lf", &fixed);
        }
        if (count == 4) {
            printf("No no no, try running it again \n");
            abort();
        }
    }

    //User prompt again
    printf("Please put in the cost per unit : \n");
    //Take user data again
    scanf("%lf", &unitC);
    count = 0;
    //Check user data again
    while (unitC <= 0) {
        count++;
        if (unitC > 0) {
            break;
        }
        if (unitC <= 0) {
            printf("Lets try that again\n");
            printf("Please put in the cost per unit : \n");
            scanf("%lf", &unitC);
        }
        if (count == 4) {
            printf("No no no, try running it again \n");
            abort();
        }
    }

    //Prompt User
    printf("Please put in the carrying cost as a percent : \n");
    //Get data from user
    scanf("%lf", &cc);
    count = 0;
    //Add new check, between 1-99%
    while (cc <= 0 | cc > 100) {
        count++;
        if (cc > 0 & cc < 100) {
            break;
        }
        //Retry for less then 1%
        if (cc <= 0) {
            printf("Lets try that again\n");
            printf("Please put in the cost per unit : \n");
            scanf("%lf", &cc);
        }
        if (count == 4) {
            printf("No no no, try running it again \n");
            abort();
        }            
        //Retry for over 99%
        else if (cc > 100) {
            printf("Lets try that again\n");
            printf("Please put in the cost per unit : \n");
            scanf("%lf", &cc);
        }
        if (count == 4) {
            printf("No no no, try running it again \n");
            abort();
        }
    }
    //Turn input into % for cost per unit
    cc = cc / 100;
    //Formula for economic ordering quantity
    eoq = sqrt((2 * (fixed * quan) / (cc * unitC)));
    printf("The Economic Ordering Quantity (EOQ) is: $%.2lf ", eoq);
    //Order per annum is the quantity over economic ordering quantity, 1 decimal place
    annum = (quan / eoq);
    printf("(%.1lf orders per annum)\n", annum);
    //Formula for total inventory costs
    TIC = ((cc * unitC)*(eoq / 2))+(fixed * (quan / eoq));
    printf("The Total Inventory Cost (TIC) is: $%.2lf \n", TIC);
    //Formula for Total annual order cost
    TAOC = TIC + (quan * unitC);
    printf("Total annual order cost: $%.2lf \n", TAOC);

    return 0;
}
