#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//structs
struct Departamento {
    char departamento[50];
};

struct Funcionario{
    char nome[50];
    int idCode;
    double salario;

    struct Departamento departamento;
};

// functions
void instanciandoFuncionario(struct Funcionario *f);
void apresentarFuncionario(struct Funcionario *funcionario);
void aumentoSalario(struct Funcionario *func);

int main() {
    struct Funcionario gustavo;
    instanciandoFuncionario(&gustavo);

    aumentoSalario(&gustavo);

    apresentarFuncionario(&gustavo);

    return 0;
}

void aumentoSalario(struct Funcionario *func) {
    printf("Quantos porcentos vai aumentar o salario? ");
    double porcentagem;
    scanf("%lf", &porcentagem);
    func -> salario += ((func -> salario / 10) * (porcentagem / 10));
}

void instanciandoFuncionario(struct Funcionario *f) {
    printf("\nNome:");
    scanf("%s", &f -> nome);
    printf("Id: ");
    scanf("%d", &f -> idCode);
    printf("Salario: R$ ");
    scanf("%lf", &f -> salario);
    printf("Departamento: ");
    scanf("%s", &f -> departamento.departamento);
}

void apresentarFuncionario(struct Funcionario *funcionario) {
    printf("\nNome: %s\n", funcionario -> nome);
    printf("Id: %d\n", funcionario -> idCode);
    printf("Salario: R$%.2f\n", funcionario -> salario);
    printf("Departamento: %s\n", funcionario -> departamento.departamento);
}

