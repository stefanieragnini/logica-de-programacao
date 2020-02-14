#include <stdio.h>
int main () {

    // GABRIEL: O nome da variável seria comprimento, cumprimento é quando uma pessoa executa algo
    double cumprimento, largura;

    printf ("Digite o cumprimento do lote");
    scanf ("%lf", &cumprimento);
    printf ("Digite a largura do lote");
    scanf ("%lf", &largura);

    double area = largura * cumprimento;

    printf ("A area do terreno e %.2lf m2", area);

    return 0;
}

// Muito bom