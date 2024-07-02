#include <stdio.h>

int main() {
    double dolar, reais;
    printf("Digite o valor em sua carteira: R$");
    scanf("%lf", &Reais);
    printf("Agora a cotacao do dolar atualmente: U$");
    scanf("%lf", &dolar);

    double conversao = reais * dolar;

    printf("Você tem U$%.2lf", conversao);
    return 0;
}

