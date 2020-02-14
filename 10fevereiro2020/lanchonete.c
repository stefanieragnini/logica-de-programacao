#include <stdio.h>
int main () {

    int sanduiches;

    printf ("insira a quantidade de sanduiches a serem produzidos");
    scanf  ("%d", &sanduiches);

    // Muito boa lógica
    float queijo = 0.1 * sanduiches;
    float presunto = 0.05 * sanduiches; 
    float hamburguer = 0.1 *sanduiches;

    printf ("Sera necessario %.2f kg de queijo \n", queijo);
    printf ("Sera necessario %.2f kg de presunto \n", presunto);
    printf ("Sera necessario %.2f kg de hamburguer \n", hamburguer);

    return 0;
}