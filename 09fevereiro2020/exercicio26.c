#include <stdio.h>
int main () {

    int a, b, c;

    printf ("Insira os numeros");
    scanf  ("%d%d%d", &a, &b, &c);

    int multlipicacao = a * b * c;

    printf ("O resultado da multlipicacao e %d", multlipicacao);
                        
    return 0; 
}