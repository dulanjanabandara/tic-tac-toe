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
    int x;
    int iSquareNum = 0;

    for (x = 0; x < 9; x++) {
        board[x] = ' ';   
    }
    displayBoard();

    while ( cWhoWon == ' ' ) {
        printf("\n%c\n", cWhoWon);
        if ( iCurrentPlayer == 1 || iCurrentPlayer == 0) {
            printf("\nPLAYER X\n");
            printf("Enter an available square number (1-9): ");
            scanf("%d", &iSquareNum);

            if ( verifySelection(iSquareNum, iCurrentPlayer) == 1 ) {
                iCurrentPlayer = 1;
            }
            else {
                iCurrentPlayer = 2;
            }
        }
        else {
            printf("\nPLAYER O\n");
            printf("Enter an available square number (1-9): ");
            scanf("%d", &iSquareNum);

            if ( verifySelection(iSquareNum, iCurrentPlayer) == 1 ) {
                iCurrentPlayer = 2;
            }
            else {
                iCurrentPlayer = 1;
            }
        }
        displayBoard();
        checkForWin();
    }

    return 0;
}

// displayBoard function definition
void displayBoard(){
    system("cls");
    printf("\n\t|\t|\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[0], board[1], board[2]);
    printf("--------|-------|--------\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[3], board[4], board[5]);
    printf("--------|-------|--------\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[6], board[7], board[8]);
    printf("\t|\t|\n");
}

// verifySelection function definition
int verifySelection(int iSquare, int iPlayer) {
    if ( board[iSquare - 1] == ' ' && (iPlayer == 1 || iPlayer == 0) ) {
        board[iSquare - 1] = 'X';
        return 0;
    }
    else if ( board[iSquare - 1] == ' ' && iPlayer == 2 ) {
        board[iSquare - 1] = 'O';
        return 0;
    }
    else {
        return 1;
    }
}

