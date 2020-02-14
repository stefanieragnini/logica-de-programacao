#include <stdio.h>
int main () {

    int dinheiro;

    scanf ("%d", &dinheiro);

    int troco = dinheiro;

    int cem = troco / 100;
    int trococ = troco - (cem * 100);

    int cinquenta = trococ / 50;
    int trococq = trococ - (cinquenta * 50);

    int vinte = trococq / 20;
    int trocov = trococq - (vinte * 20);

    int dez = trocov / 10;
    int trocod = trocov - (dez * 10);

    int cinco = trocod / 5;
    int trococinco = trocod - (cinco * 5);

    int dois = trococinco / 2;
    int trocodois = trococinco - (dois * 2);

    int um = trocodois / 1;
    int trocoum = um - (um * 1);

    printf ("%d\n", dinheiro);
    printf ("%d nota(s) de R$ 100,00\n", cem);
    printf ("%d nota(s) de R$ 50,00\n", cinquenta);
    printf ("%d nota(s) de R$ 20,00\n", vinte);
    printf ("%d nota(s) de R$ 10,00\n", dez);
    printf ("%d nota(s) de R$ 5,00\n", cinco);
    printf ("%d nota(s) de R$ 2,00\n", dois);
    printf ("%d nota(s) de R$ 1,00\n", um);

    return 0;
}