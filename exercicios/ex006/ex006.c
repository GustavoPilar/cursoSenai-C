#include <stdio.h>

int main() {

    double raio, altura, volume;
    double pi = 3.14159;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);

    volume = pi * (raio * raio) * altura;

    printf("O valor do volume e de %.2lf cm3", volume);

    return 0;
}
