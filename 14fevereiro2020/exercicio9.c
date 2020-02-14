#include <stdio.h>

int main () {
    int a, b, c;
    printf ("Insira os 3 numeros");
    scanf  ("%d%d%d", &a, &b, &c);

    if (a > b && a > c) {
        printf ("O maior numero e o %d", a);
    } else if (b > a && b > c ) {
        printf ("O maior numero e o %d", b);
    } else if (c > a && c > b) {
        printf ("O maior numero e o %d", c);
    }

    return 0; 
}