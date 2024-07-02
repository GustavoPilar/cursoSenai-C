#include <stdio.h>

int main() {

    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 16) {
        printf("Você já pode votar.");
    } else {
        int falta = 16 - idade;
        printf("Falta %d ano(s) para você voltar", falta);
    }

    return 0;
}
