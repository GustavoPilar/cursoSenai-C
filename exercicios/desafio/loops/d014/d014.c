#include <stdio.h>

int main() {

    char user[30];
    int senha;
    printf("Usuario: ");
    scanf("%s", &user);
    printf("Digite sua senha: ");
    scanf("%d", &senha);

    while(senha != 2002) {
        printf("Acesso negado. Digite novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido. Seja bem-vindo, %s!", user);

    return 0;
}
