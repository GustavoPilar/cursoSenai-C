#include <stdio.h>4

//Functions
int quadrado(int numero);

int main() {

    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    printf("O quadrado e: %d", quadrado(numero));

    return 0;
}

int quadrado(int numero) {
    return numero * numero;
}
