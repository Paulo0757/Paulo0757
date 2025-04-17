#include <stdio.h>
int main() {
    int idade;

    printf("insira sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("É adulto. (ta chegando os boletos)");
    } else if (idade >= 12) {
        printf("É adolescente. (O bixinho chato).");
    } else {
        printf("É uma criança (aproveita jovem)");
    }

    return 0;

}