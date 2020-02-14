#include <stdio.h> 
int main () {

    double a, b;

    scanf("%lf%lf", &a, &b);

    double ma = 3.5 * a;
    double mb = 7.5 * b;
    double media = (ma + mb) / 11;

    printf("MEDIA = %.5lf\n", media);


    return 0;
}