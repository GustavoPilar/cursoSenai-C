#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// structs
struct Pessoa {
    char nome[50];
    float altura;
    int idade;
};

//function
void instanciandoPessoa(struct Pessoa *pessoa);
void apresentarPessoa(struct Pessoa *pessoa);
void maiorAltura(struct Pessoa pessoas[], int n);
void quantasPessoas(struct Pessoa pessoas[], int n);

int main() {

    printf("Quantas pessoas? ");
    int n;
    scanf("%d", &n);
    struct Pessoa pessoas[n];

    quantasPessoas(pessoas, n);

    return 0;
}

void instanciandoPessoa(struct Pessoa *pessoa) {
    printf("\nNome da pessoa: ");
    scanf("%s", &pessoa -> nome);
    printf("Idade: ");
    scanf("%d", &pessoa -> idade);
    printf("Altura: ");
    scanf("%f", &pessoa -> altura);
}

void quantasPessoas(struct Pessoa pessoas[], int n) {
    for(int i = 0; i < n; i++) {
        instanciandoPessoa(&pessoas[i]);
    }
    maiorAltura(pessoas, n);
}

void apresentarPessoa(struct Pessoa *pessoa) {
    printf("\nNome: %s\n", pessoa -> nome);
    printf("Idade: %d\n", pessoa -> idade);
    printf("Altura: %.2f", pessoa -> altura);
}

void maiorAltura(struct Pessoa pessoas[], int n) {
    float maior = 0.0;
    int index;
    for(int i = 0; i < n; i++) {
        if(pessoas[i].altura > maior) {
            maior = pessoas[i].altura;
            index = i;
        }
    }

    printf("\n-- Pessoa com a maior altura -- ");
    apresentarPessoa(&pessoas[index]);
}

