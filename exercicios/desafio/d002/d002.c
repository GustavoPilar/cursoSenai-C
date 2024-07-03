#include <stdio.h>

int main() {

    int i = 0, soma = 0;

    while(i <= 50) {
        if(i % 2 != 0) {
            soma += i;
        }
        i++;
    }

    printf("Soma dos impares: %d", soma);

    return 0;
}
