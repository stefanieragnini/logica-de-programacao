#include <stdio.h>
int main () {

    int semacidentes;

    printf ("Insira a quantidade de dias sem acidentes");
    scanf  ("%d", &semacidentes);

    int anos = semacidentes / 365; // Verificar se está funcionando, pois é usado 365 e 360
    int meses = (semacidentes % 365) / 30;
    int dias = (semacidentes % 365) % 30;


    printf ("%d ano(s)\n", anos);
    printf ("%d mes(es)\n", meses);
    printf ("%d dia(s)\n", dias);

    return 0;
}