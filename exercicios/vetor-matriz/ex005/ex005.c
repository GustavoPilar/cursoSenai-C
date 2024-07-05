#include <stdio.h>

int main() {

    int matrizA[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int matrizB[3][2];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            matrizB[i][j] = matrizA[j][i];
            printf("[%d] ", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
