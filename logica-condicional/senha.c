#include <stdio.h>
int main () {
    int senha= 0;

    while (senha != 5678) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != 5678) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    }

    printf("Acesso liberado.");

return 0;

}