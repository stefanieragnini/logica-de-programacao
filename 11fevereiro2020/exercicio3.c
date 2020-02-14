#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, x;

    printf ("Insira os 3 valores");
    scanf ("%lf%lf%lf", &a, &b, &c);
    
    // Boa lógica, se não entendeu me chama
    if (a < b) {x = a; a=b; b=x;}
    if (b < c) {x = b; b=c; c=x;}
    if (a < b) {x = a; a=b; b=x;}

    // Bom trabalho
    if (a >= (b + c)) {
        printf ("NAO FORMA TRIANGULO\n");
     } 
    if ((a*a) == (b*b) + (c*c)) {
        printf ("TRIANGULO RETANGULO\n");
    }
    if ((a*a) > (b*b) + (c*c)) {
        printf ("TRIANGULO OBTUSANGULO\n");
    }
    if ((a*a) < (b*b) + (c*c)){
        printf ("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c) {
        printf ("TRIANGULO EQUILATERO\n");
    }
    if (a==b || b == c) {
        printf ("TRIANGULO ISOCELES\n");
    }
    
    return 0; 
}