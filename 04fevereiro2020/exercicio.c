#include <stdio.h>
int main () {

    int funcionario, horas;
    float valor;

    scanf ("%d%d%f", &funcionario, &horas, &valor);

    printf ("NUMBER = %d\n", funcionario);
    printf ("SALARY = U$ %.2f\n", (horas * valor));

    return 0;
}