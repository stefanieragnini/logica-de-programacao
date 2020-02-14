#include <stdio.h>

int main () {

    double salario, minimo;

    printf ("Insira o valor do salario minimo");
    scanf  ("%lf", &minimo);
    printf ("Insira o valor do seu salario");
    scanf  ("%lf", &salario);

    double total = salario / minimo;

    printf ("Voce recebe cerca de %.2lf salarios minimos", total);

    return 0;
}