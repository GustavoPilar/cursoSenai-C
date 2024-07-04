#include <stdio.h>

int main() {

    int n, negativos = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    int matriz[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("linha %d, coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] < 0) {
                negativos++;
            }
        }
    }

    printf("Matriz:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf(" [ %d ] ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal principal:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == i) {
                printf(" [ %d ] ", matriz[i][j]);
            } else {
                printf(" [   ] ");
            }
        }
        printf("\n");
    }

    printf("Quantidade de negativos: %d", negativos);

    return 0;
}
