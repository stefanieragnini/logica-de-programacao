#include <stdio.h>
int main () {

    double conta;

    printf ("Insira o valor total da conta");
    scanf  ("%lf", &conta);

    int carlos = conta / 3;
    int andre = conta / 3;
    double felipe =  conta - (carlos + andre);

    printf ("Carlos paga R$ %d\n", carlos);
    printf ("Andre paga R$ %d\n", andre);
    printf ("Felipe paga R$ %.2lf\n", felipe);

    return 0;
}

// Muito bom o uso dos tipos, bem usado