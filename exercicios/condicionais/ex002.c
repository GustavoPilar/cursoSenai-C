#include <stdio.h>

int main() {

    int numero1, numero2, numero3;
    printf("Digite tr�s n�meros respectivamente: ");
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);

    if(numero1 > numero2 && numero1 > numero3) {
        printf("N�mero maior: %d", numero1);
    } else if (numero2 > numero3) {
        printf("N�mero maior: %d", numero2);
    } else {
        printf("N�mero maior: %d", numero3);
    }


    return 0;
}
