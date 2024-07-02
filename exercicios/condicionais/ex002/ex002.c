#include <stdio.h>

int main() {

    int numero1, numero2, numero3;
    printf("Digite três números respectivamente: ");
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);

    if(numero1 > numero2 && numero1 > numero3) {
        printf("Número maior: %d", numero1);
    } else if (numero2 > numero3) {
        printf("Número maior: %d", numero2);
    } else {
        printf("Número maior: %d", numero3);
    }


    return 0;
}
