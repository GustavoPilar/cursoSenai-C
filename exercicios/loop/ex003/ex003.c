#include <stdio.h>

int main() {

    int numeroUser;
    printf("Digite o um n�mero entre 1 a 10: ");
    scanf("%d", &numeroUser);

    do {
        printf("N�mero errado, tente outro: ");
        scanf("%d", &numeroUser);
    } while(numeroUser != 7);

    printf("Acertou, parabens!");

    return 0;
}
