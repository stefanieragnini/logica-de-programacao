#include <stdio.h>

int main () {
    int escolha;
    float altura, peso;
    printf ("Qual e o seu sexo? 1:Feminino 2:Masculino\n");
    scanf  ("%d", &escolha);
    printf ("Insira sua altura\n");
    scanf  ("%f", &altura);

    if (escolha == 1) {
       peso = (62.1 * altura) - 44.7;
    } else if (escolha == 2) {
        peso = (72.7 * altura) - 58;
    }
     printf ("Seu peso ideal e %.2f kg", peso);

    return 0;
}