#include <stdio.h>

int main() {

    float altura, raio;

    printf ("Insira a altura do cilindro");
    scanf  ("%f", &altura);
    printf ("Insira o raio do cilindro");
    scanf  ("%f", &raio);

    // Podes botar o 3.14 em um variável chamada pi, isso facilita a leitura do código
    float pi = 3.14;
    float volume = altura * pi * (raio * raio);

    printf ("O volume da caixa da agua e %.2f\n", volume);

    return 0;
}