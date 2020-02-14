#include <stdio.h>
int main () {

    int numero; 

    printf ("Insira o numero de ate 3 digitos");
    scanf  ("%d", &numero);

    int unidades = numero % 10;
    numero = numero / 10;
    int dezenas = numero % 10;
    numero = numero / 10;
    int centenas = numero % 10;

    printf ("CENTENA = %d\n", centenas);
    printf ("DEZENA = %d\n", dezenas);
    printf ("UNIDADE = %d\n", unidades);

    return 0;
}