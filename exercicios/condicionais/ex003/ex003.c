#include <stdio.h>

int main() {

    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 16) {
        printf("Voc� j� pode votar.");
    } else {
        int falta = 16 - idade;
        printf("Falta %d ano(s) para voc� voltar", falta);
    }

    return 0;
}
