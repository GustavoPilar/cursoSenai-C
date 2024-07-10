#include <stdio.h>

//Functions
void incrementando(int *ptr);

int main() {
    int numero = 1;
    printf("Numero: %d\n", numero);
    incrementando(&numero);
    printf("Incremento: %d\n", numero);

    return 0;
}

void incrementando(int *ptr) {
    (*ptr)++;
}
