#include <stdio.h>

int main() {

    int numero, negativos = 0, positivos = 0, zeros = 0;

    printf("Digite 10 numeros respectivamente: \n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numero);
        if(numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    printf("Zeros: %d\n", zeros);
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);

    return 0;
}
