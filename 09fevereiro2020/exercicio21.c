#include <stdio.h>
int main () {

    float lata, garrafaml, garrafalitro;

    printf ("Insira a quantidade de latas");
    scanf  ("%f", &lata);
    printf ("Insira a quantidade de Garrafas 600ml");
    scanf  ("%f", &garrafaml);
    printf ("Insira a quantidade de garrafas 2l");
    scanf  ("%f", &garrafalitro);

    float latas = lata * 0.35;
    float garrafamililitro = garrafaml * 0.6;
    float garrafalitros = garrafalitro * 2;
    float total = latas + garrafamililitro + garrafalitros;

    printf ("Voce comprou %.2f litros de refrigerante", total);
    
    return 0;
}

// Muito bom, podes usar o double para ter mais precisão se quiser