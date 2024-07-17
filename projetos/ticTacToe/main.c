#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// CONSTANTES
char frame[3][3];
const char player = 'X';
const char pc = 'O';

//FUNCOES
void resetFrame();
void printFrame();
int checkWhiteSpace();
void playerMove();
void pcMove();
char checkWinner();
char printWinner(char winner);

int main() {
    char winner = ' ';
    char answer = ' ';

    do {
        winner = ' ';
        answer = ' ';
        resetFrame();

        while(checkWinner() == ' ' && checkWhiteSpace() != 0) {
            printFrame();

            playerMove();
            winner = checkWinner();
            if(checkWinner() != ' ' || checkWhiteSpace == 0) {
                break;
            }

            pcMove();
            winner = checkWinner();
            if(checkWinner() != ' ' || checkWhiteSpace == 0) {
                break;
            }
        }

        printFrame();
        printWinner(winner);

        printf("\nDo you wanna play again? (Y/N) ");
        scanf("%c");
        scanf("%c", &answer);
        answer = toupper(answer);
    } while(answer == 'Y');

    printf("Game over. Thank for playing");

    return 0;
}

void resetFrame() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            frame[i][j] = ' ';
        }
    }
}

void printFrame() {
    printf(" %c | %c | %c ", frame[0][0], frame[0][1], frame[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", frame[1][0], frame[1][1], frame[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", frame[2][0], frame[2][1], frame[2][2]);
    printf("\n");
}

int checkWhiteSpace() {
    int freeSpaces = 9;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(frame[i][j] != ' ') {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void playerMove() {
    int row;
    int collumn;

    do {
        printf("Choose the row #(1 - 3): ");
        scanf("%d", &row);
        row--;
        printf("Choose the collumn #(1 - 3): ");
        scanf("%d", &collumn);
        collumn --;

        if(frame[row][collumn] != ' ') {
            printf("Invalid movement.\n");
        }
        else {
            frame[row][collumn] = player;
            break;
        }
    }
    while(frame[row][collumn] != ' ');
}

void pcMove() {
    srand(time(0));
    int row;
    int collumn;

    if(checkWhiteSpace() > 0) {
        do {
            row = rand() % 3;
            collumn = rand() % 3;
        } while(frame[row][collumn] != ' ');

        frame[row][collumn] = pc;
    }
    else {
        printWinner(' ');
    }
}

char checkWinner() {
    // ROWS VERIFICATION
    for(int i = 0; i < 3; i++) {
        if(frame[i][0] == frame[i][1] && frame[i][0] == frame[i][2]) {
            return frame[i][0];
        }
    }
    // COLLUMN VERIFICATION
    for(int i = 0; i < 3; i++) {
        if(frame[0][i] == frame[1][i] && frame[0][i] == frame[2][i]) {
            return frame[0][i];
        }
    }
    // DIAGONAL VERIFICATION
    if(frame[0][0] == frame[1][1] && frame[0][0] == frame[2][2]) {
        return frame[0][0];
    }
    if(frame[0][2] == frame[1][1] && frame[0][2] == frame[2][0]) {
        return frame[0][2];
    }
    return ' ';
}

char printWinner(char winner) {
    if(checkWinner() == player) {
        printf("\nYOU WIN! :D\n");
    }
    else if(checkWinner() == pc) {
        printf("\nYOU LOSE! XC\n");
    }
    else {
        printf("\nTIE. .-.\n");
    }
}
