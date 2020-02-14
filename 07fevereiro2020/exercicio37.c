#include <stdio.h>
int main () {

    int numero; 

    printf ("Insira o numero que voce deseja saber a tabuada");
    scanf  ("%d", &numero);

    int tabuada1 = (1 * numero);
    int tabuada2 = (2 * numero);
    int tabuada3 = (3 * numero);
    int tabuada4 = (4 * numero);
    int tabuada5 = (5 * numero);
    int tabuada6 = (6 * numero);
    int tabuada7 = (7 * numero);
    int tabuada8 = (8 * numero);
    int tabuada9 = (9 * numero);
    int tabuada10 = (10 * numero);

    // Muito boa essa forma de exibir, fica bonito usuário
    printf ("1 * %d = %d\n", numero, tabuada1);
    printf ("2 * %d = %d\n", numero, tabuada2);
    printf ("3 * %d = %d\n", numero, tabuada3);
    printf ("4 * %d = %d\n", numero, tabuada4);
    printf ("5 * %d = %d\n", numero, tabuada5);
    printf ("6 * %d = %d\n", numero, tabuada6);
    printf ("7 * %d = %d\n", numero, tabuada7);
    printf ("8 * %d = %d\n", numero, tabuada8);
    printf ("9 * %d = %d\n", numero, tabuada9);
    printf ("10 * %d = %d\n", numero, tabuada10);
                                 
    return 0;
}