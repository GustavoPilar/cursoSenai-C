#include <stdio.h>

int main() {

    int numero;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    int i = 1;
    int fatorial = numero;

    while(i < numero) {
        fatorial = fatorial * (numero - i);
        i++;
    }

    printf("O fatorial � %d", fatorial);
    return 0;
}
