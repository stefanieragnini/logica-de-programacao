#include <stdio.h>

int main () {
    int escolha;
    float altura;
    printf ("Qual e o seu sexo? 1:Feminino 2:Masculino\n");
    scanf  ("%d", &escolha);
    printf ("Insira sua altura\n");
    scanf  ("%f", &altura);

    if (escolha == 1) {
       float peso = (62.1 * altura) - 44.7;
       printf ("Seu peso ideal e %.2f kg", peso);
    } else if (escolha == 2) {
        float peso = (72.7 * altura) - 58;
        printf ("Seu peso ideal e %.2f kg", peso);
    }

    return 0;
}