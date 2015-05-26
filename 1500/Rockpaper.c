
/*
 * ASSIGNMENT:  CIS*1500  Assignment  number3
 * Author: Nathan Reymer
 * Date Created: October 8th
 * Date Modified: October 18th
 * DESCRIPTION:
 * This program compares user input to a random number (1-5) which corresponds to
 * Rock, paper, scissors, lizard or spock
 * KNOWN  BUGS: None
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    //Declare Variables for loops, player choice, scores, and defence 
    int x, choice, scoreH, scoreC, tie, games, yn, i;
    i = 1;
    //Set All scores to 0
    scoreH = 0;
    scoreC = 0;
    tie = 0;
    //Random Function
    srand(time(NULL));
    //Get Number of games
    while (1) {
        printf("How many games would you like to play? \n");
        scanf("%d", &games);
        if (games <= 0) {
            printf("Please try again \n");

        }
            //If number >20, check if they really want to do that
        else if (games > 20) {
            printf("Are you sure? Thats %d games \n", games);
            printf("1. Yes 2. No \n");
            scanf("%d", &yn);
            //Get answer
            if (yn == 1) {
                games = games;
            } else if (yn == 2) {
                printf("How many games would you like to play? \n");
                scanf("%d", &games);
                break;
            }
        } else if (games < 20 & games > 0) {
            break;
        }
    }
    //For loop for players number of games
    for (i=i; i < games + 1; i++) {
        //Print information for choices
        printf("\n");
        printf("Game %d \n", i);
        printf("Please put in your choice : \n");
        printf("1. For rock \n");
        printf("2. For scissors \n");
        printf("3. For paper \n");
        printf("4. For Lizard \n");
        printf("5. For Spock \n");
        printf("\n");
        //Check to see if choice is valid
        while (1) {
            scanf("%d", &choice);
            if (choice <= 0) {
                printf("Try that again...\n ");
            } else if (choice > 5) {
                printf("Try that again... \n");
            } else
                break;
        }

        printf("\n");
        //Display result of choice
        x = (rand() % 5) + 1;
        if (x == 1 & choice == 1) {
            printf("Rock vs. Rock! \n");
            //Display action of choice
            printf("You tie! \n");
            //Increase score
            tie++;
        }
        if (x == 2 & choice == 2) {
            printf("Scissors vs. Scissors \n");
            printf("You tie! \n");
            tie++;
        }
        if (x == 3 & choice == 3) {
            printf("Paper vs Paper! \n");
            printf("You tie!\n");
            tie++;
        }
        if (x == 4 & choice == 4) {
            printf("Lizard vs Lizard! \n");
            printf("You tie!\n");
            tie++;
        }
        if (x == 5 & choice == 5) {
            printf("Spock vs Spock! \n");
            printf("You tie!\n");
            tie++;
        }

        if (x == 1 & choice == 2) {
            printf("Rock vs. Scissors \n");
            printf("Rock crushes Scissors! \n");
            printf("You Lose! \n");
            scoreC++;
        }
        if (x == 1 & choice == 3) {
            printf("Rock vs. Paper \n");
            printf("Paper covers rock! \n");
            printf("You win! \n");
            scoreH++;
        }
        if (x == 1 & choice == 4) {
            printf("Rock vs. Lizard \n");
            printf("Rock crushes lizard! \n");
            printf("You win! \n");
            scoreH++;
        }
        if (x == 1 & choice == 5) {
            printf("Rock vs. Spock \n");
            printf("Spock vaporizes rock! \n");
            printf("You lose! \n");
            scoreC++;
        }
        if (x == 2 & choice == 1) {
            printf("Scissors vs Rock \n");
            printf("Rock crushes Scissors! \n");
            printf("You lose! \n");
            scoreC++;
        }
        if (x == 2 & choice == 3) {
            printf("Scissors vs Paper \n");
            printf("Scissors cuts paper! \n");
            printf("You win! \n");
            scoreH++;
        }
        if (x == 2 & choice == 4) {
            printf("Scissors vs Lizard \n");
            printf("Scissors decapitates lizard! \n");
            printf("You win! \n");
            scoreH++;
        }
        if (x == 2 & choice == 5) {
            printf("Scissors vs Spock \n");
            printf("Spock smashes scissors! \n");
            printf("You lose! \n");
            scoreC++;
        }
        if (x == 3 & choice == 1) {
            printf("Paper vs Rock \n");
            printf("Paper covers rock! \n");
            printf("You win! \n");
            scoreH++;
        }
        if (x == 3 & choice == 2) {
            printf("Paper vs Scissors \n");
            printf("Scissors cuts paper! \n");
            printf("You lose! \n");
            scoreC++;
        }
        if (x == 3 & choice == 4) {
            printf("Paper vs Lizard \n");
            printf("Lizard eats paper! \n");
            printf("You lose! \n");
            scoreC++;
        }
        if (x == 4 & choice == 5) {
            printf("Lizard vs Spock \n");
            printf("Lizard poisons Spock! \n");
            printf("You Lose! \n");
            scoreC++;
        }
        if (x == 5 & choice == 3) {
            printf("Paper vs Spock \n");
            printf("Paper disproves Spock! \n");
            printf("You Win! \n");
            scoreH++;
        }
        if (x == 3 & choice == 5) {
            printf("Spock vs Paper \n");
            printf("Paper disproves Spock! \n");
            printf("You Lose! \n");
            scoreC++;
        }
        if (x == 5 & choice == 4) {
            printf("Lizard vs Spock \n");
            printf("Lizard poisons Spock! \n");
            printf("You Win! \n");
            scoreH++;
        }
        if (x == 4 & choice == 3) {
            printf("Paper vs Lizard \n");
            printf("Lizard eats paper! \n");
            printf("You Lose! \n");
            scoreC++;
        }
        if (x == 4 & choice == 2) {
            printf("Scissors vs Lizard \n");
            printf("Scissors decapitates lizard! \n");
            printf("You Win! \n");
            scoreH++;
        }
        if (x == 5 & choice == 2) {
            printf("Scissors vs Spock \n");
            printf("Spock smashes scissors! \n");
            printf("You Lose! \n");
            scoreC++;
        }
        if (x == 5 & choice == 1) {
            printf("Rock vs Spock \n");
            printf("Spock vaporizes rock! \n");
            printf("You Lose! \n");
            scoreC++;
        }
        if (x == 4 & choice == 1) {
            printf("Rock vs Lizard \n");
            printf("Rock crushes lizard! \n");
            printf("You Win! \n");
            scoreH++;
        }
    }
    //Display total scores, end program
    printf("\n");
    printf("You won %d times \n", scoreH);
    printf("You lost %d times \n", scoreC);
    printf("You tied %d times \n", tie);
    return 0;
}
