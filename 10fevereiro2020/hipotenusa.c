#include <stdio.h>
#include <math.h>
int main () {

    int catetoa, catetoo;

    printf ("Insira o valor do cateto adjacente");
    scanf  ("%d", &catetoa);
    printf ("Insira o valor de cateto oposto");
    scanf  ("%d", &catetoo);

    double adjacente = (catetoa * catetoa);
    double oposto = (catetoo * catetoo); 
    double hipotenusa = adjacente + oposto;
    double raizhipotenusa = sqrt(hipotenusa);

    printf ("O valor da hipotenusa e %.0lf\n", raizhipotenusa);

    return 0; 
}