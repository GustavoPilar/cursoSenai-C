#include <stdio.h>

int main() {
    double nota1, nota2, nota3;
    printf("Digite o valor da primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite o valor da segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite o valor da terceira nota: ");
    scanf("%lf", &nota3);

    double media = (nota1 + nota2 + nota3) / 3;

    printf("A media do aluno foi: %.2lf", media);

    return 0;
}

