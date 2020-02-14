#include <stdio.h>

    int main () {

    int a, b;

    printf ("Insira dois numeros");
    scanf  ("%d%d", &a, &b);

    int divisao = a / b;

    printf ("O resultado da divisao e %d\n", divisao);

    return 0;
}