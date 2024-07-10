#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// struct
struct Estado {
    char estado[3];
};

struct Cidade {
    char municipio[50];

    struct Estado estado;
};

struct Endereco {
    char logradouro[50];
    int numero;

    struct Cidade municipio;
};
//function
char* escolhaCidade();
void mostrarEndereco(struct Endereco enderecos[], int n);

int main() {

    struct Endereco enderecos[6] = {
        {"Av. Prudente de Morais", 5121, {"Natal", {"RN"}}},
        {"Av. Capitao-Mor Gouveia", 2488, {"Natal", {"RN"}}},
        {"R. Buenos Aires", 1260, {"Curitiba", {"PR"}}},
        {"Estr. do Ganchinho", 1451, {"Curitiba", {"PR"}}},
        {"Rua Princesa Isabel", 0, {"Santos", {"SP"}}},
        {"Av. Conselheiro Nebias", 588, {"Santos", {"SP"}}}
    };

    mostrarEndereco(enderecos, 6);


    return 0;
}

void mostrarEndereco(struct Endereco enderecos[], int n) {
    char* cidade = escolhaCidade();
    for(int i = 0; i < n; i++) {
        if(strcmp(enderecos[i].municipio.municipio, cidade) == 0) {
            printf("Logradouro: %s, ", enderecos[i].logradouro);
            printf("%d, ", enderecos[i].numero);
            printf("%s, ", enderecos[i].municipio.municipio);
            printf("%s\n", enderecos[i].municipio.estado.estado);
        }
    }
}

char* escolhaCidade() {
    printf("Escolha as seguintas cidades:\n");
    printf("[1] - Curitiba\n");
    printf("[2] - Natal\n");
    printf("[3] - Santos\n");
    printf("Escolha: ");

    int escolha;
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            return "Curitiba";
        case 2:
            return "Natal";
        case 3:
            return "Santos";
        default:
            return "Numero invalido";
    }
}

