#include <stdio.h>

int main() {

    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    for(int i = 0; i <= 10; i++) {
        printf("%d X %d = %d\n", numero, i, (i * numero));
    }

    return 0;
}
