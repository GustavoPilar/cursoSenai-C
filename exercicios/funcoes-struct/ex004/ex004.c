#include <stdio.h>

//Function
int maiorNumero(int n1, int n2);

int main() {

    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("O maior numero e: %d", maiorNumero(n1, n2));

    return 0;
}

int maiorNumero(int n1, int n2) {
    if(n1 > n2) {
        return n1;
    }
    else {
        return n2;
    }
}
