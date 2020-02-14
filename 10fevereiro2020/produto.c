#include <stdio.h>
int main () {

    double produto;

    printf ("Insira o preco do produto");
    scanf  ("%lf", &produto);

    double desconto = produto * 0.10;
    double desconto_total = produto - desconto;

    printf ("Aplicando o desconto, o valor do produto fica R$ %.2lf", desconto_total);

    return 0;
}