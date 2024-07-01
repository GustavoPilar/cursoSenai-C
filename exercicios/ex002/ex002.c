#include <stdio.h>

int main() {
    double altura;
    int peso;
    printf("Digite a altura da pessoa (m): ");
    scanf("%lf", &altura);
    printf("Digite o peso da pessoa (kg): ");
    scanf("%d", &peso);

    double imc = peso / (altura * altura);

    printf("o IMC é: %.2lf", imc);
    return 0;
}
