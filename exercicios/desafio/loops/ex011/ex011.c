#include <stdio.h>

int main() {

    int n1, n2, n3;
    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    printf("Digite um n�mero: ");
    scanf("%d", &n2);
    printf("Digite um n�mero: ");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3) {
        printf("Maior numero: %d", n1);
    } else if (n2 > n3) {
        printf("Maior numero: %d", n2);
    } else {
        printf("Maior numero: %d", n3);
    }

    return 0;
}
