#include <stdio.h>
int main () {

    double dinheiro; 
   
    scanf ("%lf", &dinheiro);

    double troco = dinheiro;

    int cem = troco / 100;
    troco = troco - (cem * 100);

    int cinquenta = troco / 50;
    troco = troco - (cinquenta * 50);

    int vinte = troco / 20;
    troco = troco - (vinte * 20);

    int dez = troco / 10;
    troco = troco - (dez * 10);

    int cinco = troco / 5; 
    troco = troco - (cinco * 5);

    int dois = troco / 2;
    troco = troco - (dois * 2);

    int um = troco / 1;
    troco = troco - (um * 1);

    int cinquent = troco / 0.50;
    troco = troco - (cinquent * 0.50);

    int vintecinco = troco / 0.25;
    troco = troco - (vintecinco * 0.25);

    int dezz = troco / 0.10;
    troco = troco - (dezz * 0.10);

    int cinc = troco / 0.05;
    troco = troco - (cinc * 0.05);

    int zeroum = troco / 0.01;
    troco = troco - (zeroum * 0.01);

    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", cem);
    printf ("%d nota(s) de R$ 50.00\n", cinquenta);
    printf ("%d nota(s) de R$ 20.00\n", vinte);
    printf ("%d nota(s) de R$ 10.00\n", dez);
    printf ("%d nota(s) de R$ 5.00\n", cinco);
    printf ("%d nota(s) de R$ 2.00\n", dois);

    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n", um);
    printf ("%d moeda(s) de R$ 0.50\n", cinquent);
    printf ("%d moeda(s) de R$ 0.25\n", vintecinco);
    printf ("%d moeda(s) de R$ 0.10\n", dezz);
    printf ("%d moeda(s) de R$ 0.05\n", cinc);
    printf ("%d moeda(s) de R$ 0.01\n", zeroum);

    return 0;
}