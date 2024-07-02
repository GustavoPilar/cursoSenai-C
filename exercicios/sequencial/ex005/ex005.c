#include <stdio.h>

int main() {

    int idade1, idade2, idade3, idade4;
    printf("Digite 4 idades: ");
    scanf("%d", &idade1);
    scanf("%d", &idade2);
    scanf("%d", &idade3);
    scanf("%d", &idade4);

    double media = (idade1 + idade2 + idade3 + idade4) / 4;

    printf("A media das idades e %.1lf", media);

    return 0;
}

