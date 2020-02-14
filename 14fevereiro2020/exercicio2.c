#include <stdio.h>

int main () {
    int ano_nascimento;
    printf ("Insira o ano do seu nascimento");
    scanf  ("%d", &ano_nascimento);

    int idade = 2020 - ano_nascimento;

    if (idade < 18 && idade >= 0) {
        int anos_faltantes = 18 - idade;
        printf ("Voce nao pode votar\n");
        printf ("Faltam %d anos para poder votar\n", anos_faltantes);
    } else if (idade >= 18) {
        printf ("Voce ja pode votar\n");
    }

    return 0; 
}