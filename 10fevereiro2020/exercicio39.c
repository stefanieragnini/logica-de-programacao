#include <stdio.h>

int main () {

    double conta1 = 200.00;
    double conta2 = 120.00; 
    // Em vez de colocar 200.00 e 120.00 de novo, podes usar a variável conta1 e conta2
    double juros1 = conta1 * 0.02;
    double juros2 = conta2 * 0.02;
    double total_juros = (conta1 + conta2) + (juros1 + juros2);
    double total = 1200.00 - total_juros;
    printf ("Sobrou R$ %.2lf do salario de Joao", total);

    return 0;
}