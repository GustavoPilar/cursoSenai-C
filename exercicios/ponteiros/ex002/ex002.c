#include <stdio.h>

int main() {

    char vetorOriginal[5] = {'a', 'e', 'i', 'o', 'u'};
    char vetorCopiaDaShopee[5];
    for(int i = 0; i < 5; i++) {
        vetorCopiaDaShopee[i] = *(vetorOriginal + i);
    }

    for(int i = 0; i < 5; i++) {
        printf(" %c ", vetorCopiaDaShopee[i]);
    }

    return 0;
}

char crackeandoVetor(char *vetorOriginal, int tamanho) {

}
