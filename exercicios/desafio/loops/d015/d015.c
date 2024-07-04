#include <stdio.h>

int main() {

    int n, negativos = 0;
    printf("Quantos numeros ira digitar (1-10)? ");
    scanf("%d", &n);
    int numeros[n];

    for(int i = 0; i < n; i++) {
        printf("numero: ");
        scanf("%d", &numeros[i]);
        if(numeros[i] < 0) {
            negativos++;
        }
    }


    if(negativos != 0) {
        printf("Numeros negativos digitados: ");
        for(int i = 0; i < n; i++) {
             if(numeros[i] < 0) {
                printf("%d ", numeros[i]);
             }
        }

    } else {
        printf("Nenhum numero negativo digitado");
    }

    return 0;
}
