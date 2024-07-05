#include <stdio.h>

int main() {

    int matriz[3][3] = {{1,3,5},{2,4,6},{8,7,9}};

    printf("Matriz:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
