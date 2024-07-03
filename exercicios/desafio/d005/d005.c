#include <stdio.h>

int main() {

    int i = 1;
    int numero = 0;
    int antigo = 1;

    // 0, 1, 2, 3, 5, 8, 13, 21, 34, 55
    while (i <= 10) {
        if(numero >= 2) {
            printf("%d, ", numero);
            numero = numero + antigo;
            antigo = numero - antigo;
        } else if(numero == 0){
            printf("0, ");
            numero++;
        } else {
            printf("1, ");
            numero += numero;
        }
        i++;
    }

    return 0;
}
