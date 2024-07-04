#include <stdio.h>

int main() {

    int x = 0, y = 1;

    while(x != y) {
        printf("Digite o valor de x: ");
        scanf("%d", &x);
        printf("Digite o valor de y: ");
        scanf("%d", &y);

        if(x < y) {
            printf("Crescente\n");
        }
        if(x > y) {
            printf("Descrecente\n");
        }
    }

    printf("Iguais");

    return 0;
}
