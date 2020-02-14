#include <stdio.h>
int main () {

    float kg;

    printf ("Insira seu peso em KG");
    scanf  ("%f", &kg);

    // Podes colocar esses 1000 em uma variável chamada: unidade_gramas
    float unidade_gramas = 1000;
    float grama = kg * unidade_gramas;

    printf ("Seu peso e equivalente a %.0f grama", grama);

    return 0;
}