#include <stdio.h>

int main(void) {

    // STRING
    char nome[100];

    fgets(nome, sizeof(nome), stdin);

    printf("Olá, %s\n", nome);
    return 0;
}
