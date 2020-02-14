#include <stdio.h>
int main ()  {

    double  salario;

    printf ("Insira o salario");
    scanf  ("%lf", &salario);

    double aumento = (salario * 0.15) + (salario);
    double imposto = (aumento * 0.08);
    double salario_real = (aumento - imposto);

    printf ("Salario inicial %.2lf\n", salario);
    printf ("Salario com aumento %.2lf\n", aumento);
    printf ("Salario ja descontado o imposto %.2lf\n", salario_real);

    return 0;
}

// Muito bom