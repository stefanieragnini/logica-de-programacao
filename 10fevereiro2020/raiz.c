#include <stdio.h>
#include <math.h>

int main () {

    int xa, xb, ya, yb;

    printf ("Insira o par ordenado X");
    scanf  ("%d%d", &xa, &xb);
    printf ("Insira o par ordenado Y");
    scanf  ("%d%d", &ya, &yb);

    int distancia_dois_pontos = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));

    printf ("A distancia entre os pontos e %d", distancia_dois_pontos);

    return 0;
}