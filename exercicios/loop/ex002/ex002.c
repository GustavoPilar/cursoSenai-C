#include <stdio.h>

int main() {

    int numero = 1;
    int soma = 0;

    while(numero <= 100) {
        soma += numero;
        numero++;
    }

    printf("Resultado: %d", soma);

    return 0;
}
