#include <stdio.h>
int main () {

    double normais, extras;

    printf ("Insira as horas normais trabalhadas");
    scanf  ("%lf", &normais);
    printf ("Insira as horas extras trabalhadas");
    scanf  ("%lf", &extras);

    normais = normais * 10;
    extras = extras * 15;
    double bruto = normais + extras;
    double liquido = bruto - (bruto * 0.10);

    printf ("O salario bruto e R$ %.2lf\n", bruto);
    printf ("O salario liquido e R$ %.2lf\n", liquido);

    return 0;
}