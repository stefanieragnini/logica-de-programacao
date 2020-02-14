#include <stdio.h>
int main () {

    float frangos;

    printf ("Insira a quantidade de frangos a se marcar");
    scanf  ("%f", &frangos);

    float chip = frangos * 4;
    float alimento = frangos * 7;
    float total = chip + alimento;

    printf ("R$ %.2f sera o valor para marcar todos os frangos da granja", total);

    return 0;
}