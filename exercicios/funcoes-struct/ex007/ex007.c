#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// structs
struct Livro {
    char nome[50];
    char autor[50];
    int paginas;
};

// functions
void instanciandoLivro(struct Livro *livro);
void apresentarLivro(struct Livro *livro);

int main() {
    struct Livro livro;

    instanciandoLivro(&livro);
    apresentarLivro(&livro);

    return 0;
}

void instanciandoLivro(struct Livro *livro) {
    printf("\nNome do livro: ");
    scanf("%s", &livro -> nome);
    printf("Autor: ");
    scanf("%s", &livro -> autor);
    printf("Paginas: ");
    scanf("%d", &livro -> paginas);
}

void apresentarLivro(struct Livro *livro) {
    printf("\nNome do livro: %s\n", livro -> nome);
    printf("Autor: %s\n", livro -> autor);
    printf("Paginas: %d", livro -> paginas);
}
