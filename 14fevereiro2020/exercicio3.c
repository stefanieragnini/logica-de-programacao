#include <stdio.h>

int main () {
    int senha;
    printf ("Insira a senha");
    scanf  ("%d", &senha);

    if (senha == 1234) {
        printf ("ACESSO PERMITIDO");
    } else {
        printf ("ACESSO NEGADO");
    }

    return 0;
}