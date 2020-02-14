#include <stdio.h>

int main() {
    float x;
    float y;

    scanf("%f", &x);
    scanf("%f", &y);
,
    float soma = x + y;
    float multiplicacao = x * y;
    float divisao = x / y;
    float subtracao = x - y; 


    printf("A soma entre %.2f e %.2f é %.2f\n", x, y, soma);
    printf("A multiplicação entre %.2f e %.2f é %.2f\n" , x, y, multiplicacao);
    printf("A divisão entre %.2f e %.2f é %.2f\n" , x, y, divisao);
    printf("A subtração entre %.2f e %.2f é %.2f\n" , x, y, subtracao);


    return 0;
}