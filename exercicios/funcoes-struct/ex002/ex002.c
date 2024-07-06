#include <stdio.h>

//Struct
struct Produto {
    char nome[50];
    int codigo;
    double preco;
};

//Function
double desconto(double porcentagem, double preco);

int main() {

    struct Produto produto = {"Iphone", 497, 2500.0};

    printf("Produto: %s\nCodigo: %d\nPreco: %.2f", produto.nome, produto.codigo, produto.preco);

    printf("\n");
    double porcentagem;
    printf("Quantos porcentos vai ser o desconto? ");
    scanf("%lf", &porcentagem);

    produto.preco = desconto(porcentagem, produto.preco);
    printf("O preco baixou para: R$%.2f\n", produto.preco);

    printf("Produto: %s\nCodigo: %d\nPreco: %.2f", produto.nome, produto.codigo, produto.preco);

    return 0;
}

double desconto(double porcentagem, double valor) {
    return valor - ((valor / 10) * (porcentagem / 10));
}
