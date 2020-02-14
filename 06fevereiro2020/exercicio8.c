#include <stdio.h>
int main () {

    float a, b, c;

    // Não é obrigatório botar os espaços entre a função e os parenteses
    // Podes usar assim printf("...")
    // Isso vai depender do time em que estás, linguagem...
    // Podes utilizar assim para seu conforto
    printf ("Insira as tres notas");
    scanf  ("%f%f%f", &a, &b, &c);

    float ma = (a * 1);
    float mb = (b * 2);
    float mc = (c * 3);
    float soma = (ma + mb + mc);
    float media_final = (soma / 6);

    printf ("A media final e %.2f", media_final);

    return 0; 
}