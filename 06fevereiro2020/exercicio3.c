#include <stdio.h>
int main () {

    int paes, broas;

    printf ("Insira a quantidade de paes vendidos");
    scanf  ("%d", &paes);
    printf ("Insira a quantidade de broas vendidas");
    scanf  ("%d", &broas);

    double total = (paes * 0.12) + (broas * 1.50);
    double poupanca = (total * 0.10);

    printf ("O total da venda dos paes e broas juntos foi %.2lf\n", total);
    printf ("O valor que deve ser colocado na poupanca e %.2lf\n", poupanca);

    return 0;

}

// GABRIEL: Muito bom, fez os usos corretos dos tipos, parabéns!