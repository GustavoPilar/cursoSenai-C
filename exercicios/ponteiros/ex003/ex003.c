#include <stdio.h>

//functions
int somaDeNumeros(int n1, int n2);
int (*somar)(int, int) = &somaDeNumeros;

int main() {

    printf("Resultado: %d", somar(2, 3));

    return 0;
}

int somaDeNumeros(int n1, int n2) { return n1 + n2; };
