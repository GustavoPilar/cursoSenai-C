#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    init();

    return 0;
}

void init() {
    int opcao;
    do {
        system("cls");
        printf("|----Menu--------------|\n");
        printf("|                      |\n");
        printf("|[1] - soma            |\n");
        printf("|[2] - subtracao       |\n");
        printf("|[3] - multiplicacao   |\n");
        printf("|[4] - divisao         |\n");
        printf("|[5] - fatorial        |\n");
        printf("|[6] - raiz quadrada   |\n");
        printf("|[7] - potencia        |\n");
        printf("|[8] - sair            |\n");
        printf("|----------------------|\n");
        printf("Escolha: ");
        fflush(stdin);
        scanf("%d", &opcao);
        if(opcao == 1) {
            soma();
        }
        if(opcao == 2) {
            subtracao();
        }
        if(opcao == 3) {
            multiplicacao();
        }
        if(opcao == 4) {
            divisao();
        }
        if(opcao == 5) {
            fatorial();
        }
        if(opcao == 6) {
            raizQuadrada();
        }
        if(opcao == 7) {
            potencia();
        }
        if(opcao == 8) {
            break;
        }
        if(opcao < 1 || opcao > 8) {
            printf("Valor invalido...\n");
            pause();
        }
    } while(opcao != 8);
}

void pause() {
    printf("\nAperte qualquer tecla....");
    fflush(stdin);
    getchar();
}

void soma() {
    double soma = 0;
    double numero;

    do {
        system("cls");
        printf("|--------------------------------|\n");
        printf("|Digite um numero para somar...  |\n");
        printf("|[0] - Sair                      |\n");
        printf("|--------------------------------|\n");
        printf("|Resultado: %lf\n", soma);
        printf("|Numero: ");
        fflush(stdin);
        scanf("%lf", &numero);
        soma += numero;
    } while(numero != 0);
    pause();
}

void subtracao() {
    double subtracao = 0;
    double numero;

    system("cls");
    printf("|--------------------------------|\n");
    printf("|Primeiro numero                 |\n");
    printf("|--------------------------------|\n");
    printf("|Numero: ");
    fflush(stdin);
    scanf("%lf", &numero);
    subtracao += numero;
    do {
        system("cls");
        printf("|--------------------------------|\n");
        printf("|Digite um numero para subtrair..|\n");
        printf("|[0] - Sair                      |\n");
        printf("|--------------------------------|\n");
        printf("|Resultado: %lf\n", subtracao);
        printf("|Numero: ");
        fflush(stdin);
        scanf("%lf", &numero);
        subtracao -= numero;
    } while(numero != 0);
    pause();
}

void multiplicacao() {
    double multiplicacao = 0;
    double numero;

    system("cls");
    printf("|--------------------------------|\n");
    printf("|Primeiro numero                 |\n");
    printf("|--------------------------------|\n");
    printf("|Numero: ");
    fflush(stdin);
    scanf("%lf", &numero);
    multiplicacao += numero;
    do {
        system("cls");
        printf("|------------------------------------|\n");
        printf("|Digite um numero para multiplicar...|\n");
        printf("|[0] - Sair                          |\n");
        printf("|------------------------------------|\n");
        printf("|Resultado: %lf\n", multiplicacao);
        printf("|Numero: ");
        fflush(stdin);
        scanf("%lf", &numero);
        multiplicacao *= numero;
    } while(numero != 0);

    pause();
}

void divisao() {
    double divisao = 0;
    double numero;

    system("cls");
    printf("|--------------------------------|\n");
    printf("|Primeiro a ser dividido         |\n");
    printf("|--------------------------------|\n");
    printf("|Numero: ");
    fflush(stdin);
    scanf("%lf", &numero);
    divisao += numero;
    do {
        system("cls");
        printf("|------------------------------------|\n");
        printf("|Digite um numero para multiplicar...|\n");
        printf("|[0] - Sair                          |\n");
        printf("|------------------------------------|\n");
        printf("|Resultado: %lf\n", divisao);
        printf("|Numero: ");
        fflush(stdin);
        scanf("%lf", &numero);
        divisao /= numero;
    } while(numero != 0);

    pause();
}

void raizQuadrada() {
    double raiz = 0;
    double numero;

    system("cls");
    printf("|--------------------------------|\n");
    printf("|Raiz quadrada...                |\n");
    printf("|--------------------------------|\n");
    printf("|Numero: ");
    fflush(stdin);
    scanf("%lf", &numero);
    raiz = sqrt(numero);

    system("cls");
    printf("|--------------------------------|\n");
    printf("|Raiz quadrada...                |\n");
    printf("|--------------------------------|\n");
    printf("|Resultado: %lf\n", raiz);

    pause();
}

void potencia() {
    double potencia;
    double numero;
    double potencializador;

    system("cls");
    printf("|--------------------------------|\n");
    printf("|POTENCIA                        |\n");
    printf("|--------------------------------|\n");
    printf("|Numero: ");
    fflush(stdin);
    scanf("%lf", &numero);

    system("cls");
    printf("|--------------------------------|\n");
    printf("|POTENCIA                        |\n");
    printf("|--------------------------------|\n");
    printf("|Potencializador: ");
    fflush(stdin);
    scanf("%lf", &potencializador);
    potencia = pow(numero, potencializador);

    system("cls");
    printf("|--------------------------------|\n");
    printf("|POTENCIA                        |\n");
    printf("|--------------------------------|\n");
    printf("|Resultado: %lf\n", potencia);

    pause();
}

void fatorial() {
    double fatorial;
    double numero;

    system("cls");
    printf("|--------------------------------|\n");
    printf("|FATORIAL                        |\n");
    printf("|--------------------------------|\n");
    printf("|Numero: ");
    fflush(stdin);
    scanf("%lf", &numero);

    int i = 1;
    fatorial = numero;

    while(i < numero) {
        fatorial = fatorial * (numero - i);
        i++;
    }

    system("cls");
    printf("|--------------------------------|\n");
    printf("|FATORIAL                        |\n");
    printf("|--------------------------------|\n");
    printf("|Resultado: %lf\n", fatorial);

    pause();
}
