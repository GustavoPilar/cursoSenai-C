#include <stdio.h>

int main() {

    int n;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    double numeros[n];
    double soma = 0, media;

    for(int i=0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%lf", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / n;

    printf("\nNumeros; ");
    for(int i=0; i < n; i++) {
        printf("%.2lf ", numeros[i]);
    }

    printf("\nMedia: %.2lf", media);

    return 0;
}
