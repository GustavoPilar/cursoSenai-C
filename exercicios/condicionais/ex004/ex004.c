#include <stdio.h>

int main() {

    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("N�mero par");
    } else {
        printf("N�mero �mpar");
    }

    return 0;
}

