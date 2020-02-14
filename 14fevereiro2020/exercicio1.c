#include <stdio.h>

int main () {
    int a, b;
    printf ("Insira o primeiro valor");
    scanf  ("%d", &a);
    printf ("Insira o segundo valor");
    scanf  ("%d", &b);

    if (a > b) {
        printf ("O maior valor e %d", a);  
    } else if (b > a) {
        printf ("O maior valor e %d", b);
    } else {
        printf ("Valor invalido");
    }

    return 0; 
}