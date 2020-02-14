#include <stdio.h>
int main () {

    char vendedor;
    double salario, vendas;

    scanf ("%s%lf%lf", &vendedor, &salario, &vendas);

    printf ("TOTAL = R$ %.2lf", (vendas * 0.15) + salario);
   
    return 0;
}