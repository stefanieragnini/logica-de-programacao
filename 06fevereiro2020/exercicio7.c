#include <stdio.h>
int main () {

    int dia, mes;

    printf ("Informe o dia e o mes");
    scanf  ("%d%d", &dia, &mes);

    int mes_para_dia = (mes * 30);
    int dia_resto = (dia % 30);
    int quantidade_dias = (mes_para_dia + dia_resto);

    printf ("Ja se passaram %d dias", quantidade_dias);

    return 0;
    
}