#include <stdio.h>

int main() {
    int hora, minutos;
    printf("Digite as horas: ");
    scanf("%d", &hora);
    minutos = hora * 60;
    printf("%d minutos", minutos);
    return 0;
}

