#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//structs
struct Carro {
    char marca[25];
    char modelo[25];
    int ano;

};

//function
void instanciandoCarro(struct Carro *c);
void apresentarCarro(struct Carro *carro);

int main() {

    struct Carro carro;
    instanciandoCarro(&carro);

    apresentarCarro(&carro);

    return 0;
}

void instanciandoCarro(struct Carro *c) {
    printf("\nMarca: ");
    scanf("%s", &c -> marca);
    printf("Modelo: ");
    scanf("%s", &c -> modelo);
    printf("ano (YYYY): ");
    scanf("%d", &c -> ano);
}

void apresentarCarro(struct Carro *carro) {
    printf("\nMarca: %s\n", carro -> marca);
    printf("Modelo: %s\n", carro -> modelo);
    printf("Ano: %d", carro -> ano);
}
