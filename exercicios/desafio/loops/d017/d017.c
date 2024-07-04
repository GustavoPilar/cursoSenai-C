#include <stdio.h>

int main() {

    int n;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);
    const char *pessoas[n];

    for(int i = 0; i < n; i++) {
        printf("Nome: ");
        scanf("%s", &pessoas[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%s, ", pessoas[i]);
    }

    return 0;
}
