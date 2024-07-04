#include <stdio.h>

int main() {

    int linhas, colunas;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);
    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Linha %d; Coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Numeros negativos: ");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if(matriz[i][j] < 0) {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}
