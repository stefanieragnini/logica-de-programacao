#include <stdio.h>
int main () {

    double peso;

    scanf ("%lf", &peso);

    double preco = peso * 12.00;

    printf ("O valor a pagar e R$ %.2lf", preco);

    return 0;
}

// Bom uso dos tipos