#include <stdio.h>
int main () {

    int km;
    double combustivel;

    scanf ("%d%lf", &km, &combustivel);

    double consumo_medio = km / combustivel;

    printf ("%.3lf KM/L", consumo_medio);

    return 0;
}