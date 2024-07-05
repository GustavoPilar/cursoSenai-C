#include <stdio.h>

int main() {

    double numero = 5.7, soma = 0, media;

    double vetor[5];

    for(int i = 0; i < 5; i++) {
        vetor[i] = numero;
        soma = vetor[i];
        numero *= 3;
    }

    media = soma / 5;

    printf("A media foi de: %.1lf", media);

    return 0;
}
