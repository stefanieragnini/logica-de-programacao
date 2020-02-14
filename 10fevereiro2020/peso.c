#include <stdio.h>

int main () {

    float peso; 

    printf ("Insira seu peso");
    scanf  ("%f", &peso);

    float engordar = peso * 0.15;
    float emagrecer = peso * 0.20;
    float totalengordar = peso + engordar;
    float totalemagrecer = peso - emagrecer;

    printf ("se voce engordar 15 por cento do eu peso atual, voce pesara %.2f kg \n", totalengordar);
    printf ("Se voce emagracer 20 por cento do seu peso atual, voce pesara %.2f kg \n", totalemagrecer);

    return 0;
}