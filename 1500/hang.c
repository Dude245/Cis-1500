/*
 * ASSIGNMENT:  CIS*1500  Assignment  Number 5
 * Author: Nathan Reymer
 * Date Created: November 3rd
 * Date Modified: November 19th
 * DESCRIPTION:
 * This program plays the game of Hangman. Users enter a word up to 20 characters
 * and then the user must guess the word
 * KNOWN  BUGS: N/A
 */
//Function prototype
void drawhang();
void drawnoose();
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int x = 0;
    srand(time(NULL));
    int tries = 0;
    char guessed[260] = "";
    int r = 0;
    char random[21][12] = {"alumni", "pencil", "button", "leaves", "claude",
        "debussy", "piano", "alison", "fantastic", "foxy",
        "table", "weekend",
        "stupid", "sock", "earth", "doorknob", "love",
        "lamp", "brick", "delight", "classy",};
    int corr = 0;
    char choice;

    char word[200] = "";
    char ch[100] = "";
    int letters = 0;
    char guess;
    int len;
    r = (rand() % 25) + 1;
    printf("Welcome to: \n");
    drawhang();
    printf(" \n");
    printf(" \n");
    printf("Do you want to randomly select a word, or enter one? \n");
    printf("1. For random 2. For Manual \n");
    scanf("%c%*c", &choice);
    if (choice == '1') {
        strcat(word, random[r]);
        len = strlen(word);
        letters = len;
    } else {
        printf("How many characters? (Less than 20) \n");
        scanf("%d%*c", &letters);
        printf("Put in the word\n");
        fgets(word, 20, stdin);
        len = strlen(word);
        while (strlen(word) != letters + 1) {
            if (strlen(word) > letters + 1) {
                printf("Try that again, you have %d letters \n", len - 1);
                fgets(word, letters, stdin);
            }
        }
    }
    x = 0;
    char hword[400] = {""};


    while (x != letters) {
        strcat(&hword[x], "_");
        strcat(hword, " ");
        x++;
    }
    printf(" \n");
    x = 0;
    tries = 0;
    x = 0;
    printf("%s \n", hword);
    int round = 0;
    drawnoose(tries);
    printf(" \n");
    printf("You have guessed %d wrong letters! \n", tries);
    printf("What is the next letter?: ");

    while (x != 99) {
        round = 0;
        x = 0;
        scanf("%c%*c", &guess);
        for (x = 0; x < letters; x++) {
            if (guess == guessed[x]) {
                round++;
            }
        }
        if (round == 0) {
            //Do Nothing
        }
        if (round >= 1) {
            guess = ch[1];
            printf("You guessed that already! \n");
            tries--;
        }
        strcat(guessed, &guess);
        round = 0;
        x = 0;

        for (x = 0; x < letters; x++) {
            if (guess == word[x]) {
                hword[x * 2] = guess;
                corr++;
                round++;
            }
        }
        if (round == 0) {
            tries++;
        }
        if (round >= 0 && guess != word[x] && x == letters - 1) {
            tries++;
        }
        x = 0;
        printf("Guessed: %s \n", guessed);
        printf(" \n");
        printf("%s \n", hword);
        printf(" \n");
        if (corr == letters) {
            printf("You guessed the word! Congrats! \n");
            printf("The word was: ");
            printf("%s", word);
            printf(" \n");
            drawhang();
            break;
        }
        if (tries == 10) {
            printf("You failed, the word was: ");
            printf("%s", word);
            drawhang();
            break;
        }
        //Drawings or fail #
        drawnoose(tries);
        printf(" \n");
        printf("You have guessed %d wrong letters! \n", tries);
        printf("What is the next letter?: ");
    }
    return 0;
}

void drawhang() {
    printf(" \n");
    printf("$$ |  $$ | \n");
    printf("$$ |  $$ | $$$$$$\\  $$$$$$$\\   $$$$$$\\  $$$$$$\\$$$$\\   $$$$$$\\  $$$$$$$\\ \n");
    printf("$$$$$$$$ | \\____$$\\ $$  __$$\\ $$  __$$\\ $$  _$$  _$$\\  \\____$$\\ $$  __$$\\ \n");
    printf("$$  __$$ | $$$$$$$ |$$ |  $$ |$$ /  $$ |$$ / $$ / $$ | $$$$$$$ |$$ |  $$ | \n");
    printf("$$ |  $$ |$$  __$$ |$$ |  $$ |$$ |  $$ |$$ | $$ | $$ |$$  __$$ |$$ |  $$ | \n");
    printf("$$ |  $$ |\\$$$$$$$ |$$ |  $$ |\\$$$$$$$ |$$ | $$ | $$ |\\$$$$$$$ |$$ |  $$ | \n");
    printf("\\__|  \\__| \\_______|\\__|  \\__| \\____$$ |\\__| \\__| \\__| \\_______|\\__|  \\__| \n");
    printf("                              $$\\   $$ |   \n");
    printf("                              \\$$$$$$  | \n");
    printf("                               \\______/ \n");
}

void drawnoose(int tries) {
    switch (tries) {
        case 0:
            printf("\n");
            printf("    _______ \n");
            printf("  |/      | \n");
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
            printf("__|__\n");
            break;
        case 1:
            printf("\n");
            printf("    _______ \n");
            printf("  |/      | \n");
            printf("  |      (\n");
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
            printf("__|__\n");
            break;
        case 2:
            printf("\n");
            printf("    _______ \n");
            printf("  |/      | \n");
            printf("  |      (_\n");
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
            printf("__|__\n");
            break;
        case 3:
            printf("\n");
            printf("    _______ \n");
            printf("  |/      | \n");
            printf("  |      (_)\n");
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
            printf("__|__\n");
            break;
        case 4:
            printf("\n");
            printf("    _______ \n");
            printf("  |/      | \n");
            printf("  |      (_)\n");
            printf("  |       |\n");
            printf("  |\n");
            printf("  |\n");
            printf("  |\n");
            printf("__|__\n");
            break;
        case 5:
            printf("\n");
            printf("    _______ \n");
            printf("  |/      | \n");
            printf("  |      (_)\n");
            printf("  |       | \n");
            printf("  |       | \n");
            printf("  |\n");
            printf("  |\n");
            printf("__|__\n");
            break;
        case 6:
            printf("\n");
            printf("    _______ \n");
            printf("  |/      | \n");
            printf("  |      (_)\n");
            printf("  |       | \n");
            printf("  |       | \n");
            printf("  |      /  \n");
            printf("  |\n");
            printf("__|__\n");
            break;
        case 7:
            printf("\n");
            printf("    _______ \n");
            printf("  |/      | \n");
            printf("  |      (_)\n");
            printf("  |       | \n");
            printf("  |       | \n");
            printf("  |      / \\ \n");
            printf("  |\n");
            printf("__|__\n");
            break;
        case 8:
            printf("\n");
            printf("    _______ \n");
            printf("  |/      | \n");
            printf("  |      (_)\n");
            printf("  |      /| \n");
            printf("  |       | \n");
            printf("  |      / \\  \n");
            printf("  |\n");
            printf("__|__\n");
            break;
        case 9:
            printf("\n");
            printf("    _______ \n");
            printf("  |/      | \n");
            printf("  |      (_)\n");
            printf("  |      /|\\ \n");
            printf("  |       | \n");
            printf("  |      / \\ \n");
            printf("  |\n");
            printf("__|__\n");
            break;
    }
}
