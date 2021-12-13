#include <stdio.h>
#include <stdlib.h>

// function prototypes
void displayBoard();
int verifySelection(int, int);
void checkForWin();

// global variables
char board[8];
char cWhoWon = ' ';
int iCurrentPlayer = 0;

// main function
int main(){

    return 0;
}

// displayBoard function definition
void displayBoard(){
    system("cls");
    printf("\n\t|\t|\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[0], board[1], board[2]);
    printf("----|----|----\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[3], board[4], board[5]);
    printf("----|----|----\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[6], board[7], board[8]);
    printf("\t|\t|\n");
}