#include <stdio.h>
int main () {

    double umcentavo, cincocentavos, dezcentavos, vintecincocentavos, cinquentacentavos, umreal;

    printf ("Insira a quantidade de moedas de 1 centavo");
    scanf  ("%lf", &umcentavo);
    printf ("Insira a quantidade de moedas de 5 centavos");
    scanf  ("%lf", &cincocentavos);
    printf ("Insira a quantidade de moedas de 10 centavos");
    scanf  ("%lf", &dezcentavos);
    printf ("Insira a quantidade de moedas de 25 centavos");
    scanf  ("%lf", &vintecincocentavos);
    printf ("Insira a quantidade de moedas de 50 centavos");
    scanf  ("%lf", &cinquentacentavos);
    printf ("Insira a quantidade de moedas de 1 real");
    scanf  ("%lf", &umreal);

    umcentavo = umcentavo * 0.01;
    cincocentavos = cincocentavos * 0.05;
    dezcentavos = dezcentavos * 0.10;
    vintecincocentavos = vintecincocentavos * 0.25;
    cinquentacentavos = cinquentacentavos * 0.50;
     
    double total = umcentavo + cincocentavos + dezcentavos + vintecincocentavos + cinquentacentavos + umreal;

    printf ("Voce tem R$ %.2lf em seu cofrinho", total);

    return 0;

}