#include <stdio.h>
#include <math.h>

int main() {

    double base, altura, area, perimetro, diagonal;
    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(area, 2) + pow(altura, 2));

    printf("Diagonal: %.4lf\n", diagonal);
    printf("Area: %.4lf\n", area);
    printf("Perimetro: %.4lf\n", perimetro);

    return 0;
}
