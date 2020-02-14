#include <stdio.h>
int main () {

    float lado;

    printf ("Insira o valor da lateral do quadrado");
    scanf  ("%f", &lado);
    

    float area_quadrado = lado * lado;

    printf ("A area total do quadrado e %.2f\n", area_quadrado);
    
    return 0;
}

// Muito bom, parabéns :)