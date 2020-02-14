#include <stdio.h>

int main () {
    double macas;
    printf ("Insira a quantidade de macas compradas");
    scanf  ("%lf", &macas);

    if (macas < 12 && macas > 0)  {
        double total = (macas * 0.30);
        printf ("O valor total da compra e R$ %.2lf\n", total); 
    } else if (macas >= 12) {
        double total_duzia = (macas * 0.25);
        printf ("O valor total da compra e R$ %.2lf\n", total_duzia);
    }

    return 0;
}