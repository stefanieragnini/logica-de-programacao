#include <stdio.h>

int main() {
    int idade;
    scanf("%d", &idade);

    if (idade < 18 && idade >= 0) {
        int anosFaltantes = 18 - idade;
        printf("Menor de Idade\n");
        printf("Faltam %d anos para ser maior de idade\n", anosFaltantes);
    } else if (idade >= 18) {
        printf("Maior de Idade\n");
    } else {
        printf("Valor Inválido\n");
    }

    // É CRIANÇA ou IDOSO?
    if ( (idade >= 0 && idade <= 14) || idade >= 60) {
        printf("Indefeso\n");
    }

    return 0;
}
