#include <stdio.h>

int main() {

   float peso, altura; 

   scanf("%f%f", &peso, &altura);

   float imc = peso / (altura * altura);

    printf("O seu IMC é %f\n", imc);

    return 0;

}