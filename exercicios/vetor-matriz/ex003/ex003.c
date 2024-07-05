#include <stdio.h>

int main() {

    int vetorA[5] = {2, 4, 6, 8, 10};
    int vetorB[5] = {3, 5, 7, 9, 11};
    int vetorC[5];

    printf("Vetor C:");
    for(int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] * vetorB[i];
        printf("[%d] ", vetorC[i]);
    }

    return 0;
}
