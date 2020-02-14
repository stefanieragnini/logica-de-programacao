#include <stdio.h>
int main () {

    float raio;

    printf ("Insira o raio da pizza");
    scanf  ("%f", &raio);

    float raio2 = raio * raio;
    float area = 3.14 * raio2;

    printf ("A area da pizza e %.2f cm2", area);

    return 0;
}