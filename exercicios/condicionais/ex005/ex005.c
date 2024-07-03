#include <stdio.h>

int main() {

    double nota;
    printf("Digite a nota: ");
    scanf("%lf", &nota);

    if(nota >= 90.0) {
        printf("A - Excelente");
    } else if (nota >= 80.0 ) {
        printf("B: Muito bom");
    } else if (nota >= 70.0) {
        printf("C: Bom");
    } else if (nota >= 60.0) {
        printf("D: Satisfatorio");
    } else if (nota >= 45.0){
        printf("E: Abaixo do esperado");
    } else {
        printf("F: Insatisfatorio");
    }

    return 0;
}
