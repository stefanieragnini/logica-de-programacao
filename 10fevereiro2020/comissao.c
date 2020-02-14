#include <stdio.h>

int main () {

    double salario, vendas;

    printf ("Insira o valor do seu salario");
    scanf  ("%lf", &salario);
    printf ("Insira o valor das suas vendas");
    scanf  ("%lf", &vendas);

    double comissao = vendas * 0.04;
    double salariocomissao = salario + comissao;

    printf ("Voce recebera R$ %.2lf referente a sua comissao \n", comissao);
    printf ("Voce recebera no total R$ %.2lf referente ao seu salario mais comissao", salariocomissao);

    return 0;

}