#include <stdio.h>

int main () {
    double macas, total;
    printf ("Insira a quantidade de macas compradas");
    scanf  ("%lf", &macas);

    if (macas < 12 && macas > 0)  {
        total = (macas * 0.30);
    } else if (macas >= 12) {
        total = (macas * 0.25);
    }
    printf ("O valor total da compra e R$ %.2lf\n", total);

    return 0;
}