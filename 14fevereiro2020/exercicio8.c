#include <stdio.h>

int main () {
    double lados, medida_do_lado;
    printf ("Insira quantos lados o Poligono tem\n");
    scanf  ("%lf", &lados);
    printf ("Insira a medida do lado (cm)\n");
    scanf  ("%lf", &medida_do_lado);

    if (lados == 3) {
        double area_triangulo = (medida_do_lado * medida_do_lado) / 2;
        printf ("TRIANGULO\n");
        printf ("A area do Triangulo e %.2lf\n", area_triangulo);
    } else if (lados == 4) {
        double area_quadrado = medida_do_lado * medida_do_lado;
        printf ("QUADRADO\n");
        printf ("A area do Quadrado e %.2lf\n", area_quadrado);
    } else if (lados == 5) {
        printf ("PENTAGONO");
    } else if (lados < 3) {
        printf ("NAO E UM POLIGONO");
    } else  {
        printf ("POLIGONO NAO IDENTIFICADO");
    }

    return 0; 
}