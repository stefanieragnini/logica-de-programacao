#include <stdio.h>

int main () {
    int a, b, c;
    printf ("Insira os 3 angulos");
    scanf  ("%d%d%d", &a, &b, &c);

    if (a == 90 || b == 90 || c == 90) {
        printf ("TRIANGULO RETANGULO");
    } else if (a > 90 || b > 90 || c > 90) {
        printf ("TRIANGULO OBTUSANGULO");
    } else if (a < 90 && b < 90 && c < 90) {
        printf ("TRIANGULO ACUTANGULO");
    }
}