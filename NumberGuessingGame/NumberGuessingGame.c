/*
This program will have the user pick a number between 1 - 10.
There will be a menu with three options:
    - press 1 to play the game.
        - if the user presses 1, they will play the game.
        - if they guess correctly, the game will be done and they will return to menu.
        - if incorrectly, then it will ask to guess again.
        - game goes on until player wins.
        - entering q will make them quit to menu.
    - press 2 to change the max number.
        - shows and lets the player change the max number.
        - no negatives.
        - no over max value.
    - press 3 to quit.
        -ends the program.
Try to save it on a file.

Steps:
1.) include any necessary files
2.) make main method
    - declare variables and assign.
3.) use while loops and if else statements.
4.) make any necessary additional methods.
    - random num generator for 1 - 10.
5.) use file reading and writing to update a file that saves the max num the user saved.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main() {
    int answer, uGuess, uInput;
    uInput = menu();
    answer = randNum();
    do {
        if (uInput = 1) {
            do {
                printf("Guess a number from 1-10: ");
                scanf("%d", &uGuess);
                if (uGuess == answer) {
                    printf("correct!");
                    break;
                } else {
                    printf("wrong.  Guess again.");
                }
            }while (uGuess != answer);
        }
        
    } while (uInput != 3);
}

//gets random number from 1 - 10
int randNum() {
    int ranDig;
    time_t t;

    srand((unsigned) time(&t));

    ranDig = (rand() % 10) + 1;

    return ranDig;
}

int menu() {
    int uInput;
    printf("Press 1 to play a game.\n");
    printf("Press 2 to change the max number.\n");
    printf("Press 3 to quit.");
    scanf("%d", &uInput);

    return uInput;
}