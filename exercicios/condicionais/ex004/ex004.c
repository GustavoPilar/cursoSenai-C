#include <stdio.h>

int main() {

    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("Número par");
    } else {
        printf("Número ímpar");
    }

    return 0;
}

