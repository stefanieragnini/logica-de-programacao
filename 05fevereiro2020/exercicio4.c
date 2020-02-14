#include <stdio.h>
int main () {

    double A, B, C; 

    scanf ("%lf%lf%lf", &A, &B, &C);

    double mA = 2 * A;
    double mB = 3 * B;
    double mC = 5 * C;
    double media = (mA + mB + mC) / 10.0;

    printf ("MEDIA = %.1lf", media);

    return 0;
 
}
