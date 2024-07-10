#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// structs
struct Filme {
    char nome[50];
    char diretor[50];
    int duracao;
};

//function
void instanciandoFilme(struct Filme *filme);
void apresentarFilme(struct Filme *filme);

int main() {

    struct Filme filme;

    instanciandoFilme(&filme);

    apresentarFilme(&filme);

    return 0;
}

void instanciandoFilme(struct Filme *filme) {
    printf("\nNome do Filme: ");
    scanf("%s", &filme -> nome);
    printf("Diretor: ");
    scanf("%s", &filme -> diretor);
    printf("Minutos: ");
    scanf("%d", &filme -> duracao);
}

void apresentarFilme(struct Filme *filme) {
    printf("\nNome do filme: %s\n", filme -> nome);
    printf("Diretor: %s\n", filme -> diretor);
    printf("Minutos: %dmin", filme -> duracao);
}
