#include <stdio.h>
int main () {

    double raio;

    scanf ("%lf", &raio);

    double pi = 3.14159;
    double raio3 = raio * raio * raio;
    double form = (4/3.0) * pi * raio3;

    printf ("VOLUME = %.3lf\n", form);

    return 0; 
}