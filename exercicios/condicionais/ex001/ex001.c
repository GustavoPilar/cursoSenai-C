#include <stdio.h>

int main() {

    int num;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("Positivo");
    } else if( num < 0) {
        printf("Negativo");
    } else {
        printf("Zero");
    }

    return 0;
}
