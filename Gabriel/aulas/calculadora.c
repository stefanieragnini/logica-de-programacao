#include <stdio.h> 

int main () {

    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);
  
    int resultado = a * b + c - d;

    printf("O resultado do calculo é %d\n", resultado);
    
    return 0;

}