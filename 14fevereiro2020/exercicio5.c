#include <stdio.h>

int main () {
    int a, b, c;
    printf ("Insira os 3 numeros inteiros");
    scanf  ("%d%d%d", &a, &b, &c);
    printf ("\n");

    if (a > b && a > c && b > c){
        printf ("%d\n%d\n%d\n", c, b, a);
    } else if (b > c && b > a && a > c){
        printf ("%d\n%d\n%d\n", c, a, b);
    } else if (c > b && c > a && b > a){
        printf ("%d\n%d\n%d\n", a, b, c);
    } else if (a > b && a > c && c > b){
        printf ("%d\n%d\n%d\n", b, c, a);
    } else if (b > a && b > c && c > a){
        printf ("%d\n%d\n%d\n", a, c, b);
    } else if (c > a && c > b && a > b){
        printf ("%d\n%d\n%d\n", b, a, c);
    }


    return 0; 
}