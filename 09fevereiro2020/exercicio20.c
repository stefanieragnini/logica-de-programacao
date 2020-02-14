#include <stdio.h>
int main () {

    float blusas, novelos;

    printf ("Insira a quantidade de blusas produzidas");
    scanf  ("%f", &blusas);
    printf ("Insira a quantidade de novelos gastos");
    scanf  ("%f", &novelos);

    // Se for usar Snake Case podes usar assim: novelos_gastos_por_blusa
    // Não tem problema o nome ser grande
    float novelos_gastos_por_blusa = novelos / blusas;

    printf ("Foram gasto(s) %.2f novelo(s) por blusa", novelosgastos_porblusa);

    return 0;
}

// Muito bom