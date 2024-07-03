#include <stdio.h>

int main() {

    int numeroUser;
    printf("Digite o um número entre 1 a 10: ");
    scanf("%d", &numeroUser);

    do {
        printf("Número errado, tente outro: ");
        scanf("%d", &numeroUser);
    } while(numeroUser != 7);

    printf("Acertou, parabens!");

    return 0;
}
