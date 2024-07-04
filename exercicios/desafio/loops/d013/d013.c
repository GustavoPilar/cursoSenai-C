#include <stdio.h>

int main() {

    int idade;
    printf("Digite uma idade valida: ");
    scanf("%d", &idade);
    int soma = idade;

    if(idade < 0) {
        printf("Impossivel calcular.");
    } else {
        while(idade >= 0) {
            printf("Digite outra idade valida: ");
            scanf("%d", &idade);
            if(idade >= 0) {
                soma += idade;
            }
        }
        printf("A soma das idades eh de: %d", soma);
    }

    return 0;
}
