/*
 * ASSIGNMENT:  CIS*1500  Assignment  Number 4
 * Author: Nathan Reymer
 * Date Created: October 18th
 * Date Modified: November 1st
 * DESCRIPTION:
 * This program plays the game of NIM gets input for rows 1-3 and then removes stones
 * from said rows
 * KNOWN  BUGS: Entering anything other than a number will cause the program to
 * loop around input
 */
//Function prototype
void play_nim();
void draw_nim();
#include <stdio.h>
//Declare variables, not war

int x =0,c=0,end=0,player=0;
//Main program
int main(void) {
int row1, row2, row3, Srow, stone;
int *p_stone,*p_Srow,*p_row1,*p_row2,*p_row3;
p_stone=&stone;
p_Srow=&Srow;
p_row1=&row1;
p_row2=&row2;
p_row3=&row3;
    //Get initial input for rows
    printf("Put in the number of stones: \n");
    scanf("%d", p_row1);
    //Check if row is greater than 28, repeat until small number entered
    if (row1 > 28) {

        while (end != 1) {
            printf("Please choose a smaller amount for row 1 \n");
            printf("Put in the number of stones \n");
            scanf("%d",p_row1);

            if (row1 <= 28) {
                break;
            }
        }
    }
    scanf("%d", p_row2);
     //Check if row is greater than 28, repeat until small number entered
    if (row2 > 28) {
        while (end != 1) {
            printf("Please choose a smaller amount for row 2 \n");
            printf("Put in the number of stones \n");
            scanf("%d", p_row2);

            if (row2 <= 28) {
                break;
            }
        }
    }
    scanf("%d", p_row3);
     //Check if row is greater than 28, repeat until small number entered
    if (row3 > 28) {
        while (end != 1) {
            printf("Please choose a smaller amount for row 3\n");
            printf("Put in the number of stones \n");
            scanf("%d", p_row3);

            if (row3 <= 28) {
                break;
            }
        }
    }
    //Infinite while loop to continue game
    while (end != 1) {
        //If all rows are empty determine winner
        if ((row1 == 0) & (row2 == 0) & (row3 == 0)) {
            //If the number of turns is even, player 2 wins
            if ((player % 2) == 0) {
                printf("Player 2 wins! \n");
                break;
                //Odd/ Else player 1 wins
            } else {
                printf("Player 1 wins! \n");
                break;
            }
            return 0;
        }
        //Increase player/turn counter by 1
        player++;
        //Call draw function
        draw_nim(row1,row2,row3);
        //Call play function
        play_nim(Srow, stone, row1,row2,row3);
    }
    return 0;
}
void draw_nim(int row1, int row2, int row3) {
    //For loop for number of entered stones
    printf("Row 1: ");
    for (x = 0; x < row1; x++) {
        printf("0");
    }
    printf("\n");
        //For loop for number of entered stones
    printf("Row 2: ");
    for (x = 0; x < row2; x++) {
        printf("0");
    }

    printf(" \n");
        //For loop for number of entered stones
    printf("Row 3: ");
    for (x = 0; x < row3; x++) {
        printf("0");
    }
    printf(" \n");
}

void play_nim(int Srow,int stone, int row1, int row 2, int row3) {
    //Display number of stones in play
    printf("%d ""%d ""%d \n", row1, row2, row3);
    //If turn is even, player 2, odd is player 1
    if ((player % 2) == 0) {
        printf("Player 2 - ");
    } else {
        printf("Player 1 - ");
    }
    while (end != 1) {
        //Game input
        //Row input
        printf("Please select a row to remove from \n");
        scanf("%d", p_Srow);
        //Check to see that row is valid, keep inputing/checking until it is
        if (Srow <= 0 | Srow >= 4) {
            while (end != 1) {
                printf("Invalid choice \n");
                printf("Please select a row to remove from \n");
                scanf("%d", p_Srow);

                if (Srow >= 0 & Srow < 4) {
                    break;
                }
            }
        }
         //Check to see that number of stones is not greater than number of stones
        //keep inputing/checking until it is within range
        printf("How many stones would you like to take away? \n");
        scanf("%d", p_stone);
        //0 is acceptable if incorrect row/ empty row
        if (stone < 0) {
            while (end != 1) {
                printf("Invalid choice \n");
                printf("How many stones would you like to take away? \n");
                scanf("%d", &stone);
//Escape clause for within bounds
                if (stone > 0) {
                    break;
                }
            }
        }
        //Cannot add stones
        if (stone < 0) {
            printf("Invalid Choice \n");
        }
//Check to see if stones to take away exceed total stones
        if (Srow == 1 & stone > row1) {
            printf("Invalid number of stones \n");
        } else if (Srow == 2 & stone > row2) {
            printf("Invalid number of stones \n");
        } else if (Srow == 3 & stone > row3) {
            printf("Invalid number of stones \n");
            //Exit clause
        } else {
            break;
        }
    }
    //Removal of stones
    if (Srow == 1) {
        //Check to see if row is empty
        if (row1 == 0) {
            printf("Invalid choice \n");
        }
        //Remove stones
        p_row1 = row1 - stone;
    } else if (Srow == 2) {
  //Check to see if row is empty
        if (row2 == 0) {
            printf("Invalid choice \n");
        }
        //Remove stones
        p_row2 = row2 - stone;
    } else if (Srow == 3) {
          //Check to see if row is empty
        if (row3 == 0) {
            printf("Invalid choice \n");
        }
        //Remove stones
        p_row3 = row3 - stone;
    }
}
