#include <stdio.h>

//struct
struct Aluno  {
    char nome[50];
    int matricula;
    double notas[3];
};

// functions
double mediaAluno(double notas[]);

int main() {

    struct Aluno aluno = {"Gustavo", 123, {81.5, 92.7, 89.8}};

    printf("A media de %s foi de: %.1f", aluno.nome, mediaAluno(aluno.notas));

    return 0;
}
double mediaAluno(double notas[]) {
    double soma = 0;
    for(int i = 0; i < 3; i++) {
        soma += notas[i];
    }

    return soma / 3;
}
