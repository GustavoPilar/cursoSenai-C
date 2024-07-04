#include <stdio.h>

int main() {

    int linhas, colunas;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);
    double matriz[linhas][colunas];
    double somaLinhas[linhas];

    for(int i = 0; i < linhas; i++) {
        double soma = 0;
        for(int j = 0; j < colunas; j++) {
            printf("Linha %d; Coluna %d: ", i, j);
            scanf("%lf", &matriz[i][j]);
            soma += matriz[i][j];
        }
        somaLinhas[i] = soma;
        soma = 0;
    }

    printf("Vetor gerado da soma: ");
    for(int i = 0; i < linhas; i++) {
        printf("[ %.2lf ] ", somaLinhas[i]);
    }

    return 0;
}
