#include <stdio.h>
int main () {

    float diagonal1, diagonal2;

    printf ("Insira o valor da diagonal maior");
    scanf  ("%f", &diagonal1);
    printf ("Insira o valor da diagonal menor");
    scanf  ("%f", &diagonal2);

    float area = (diagonal1 * diagonal2) / 2;

    printf ("A area do losango e %.0f", area);

    return 0;
}