#include <stdio.h>
int main () {

    float celsius;

    printf ("Insira a temperatura a ser convertida");
    scanf  ("%f", &celsius);

    float formula = (celsius * 1.8) + 32;

    printf ("%2.f graus Fahrenheit", formula);

    return 0;
}