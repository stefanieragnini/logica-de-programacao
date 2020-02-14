#include <stdio.h>
int main () {

    int p, m, g;

    printf ("Insira a quantidade de camisas P, M e G");
    scanf  ("%d%d%d", &p, &m, &g);

    // Aqui você precisa utilizar double
    // Inteiro vai dar o valor inválido a ser arrecadado
    // Comece a pensar em design de código
    // Isso é uma dica bem importante e que vás levar para vida. Software se chama assim porque é soft (leve)
    // não é hard (duro)
    // Então ele pode e deve mudar durante o tempo de vida dele
    
    // Imagine que o código abaixo é uma regra importante do sistema, e que o cliente pede agora para colocar
    // 10.5 para camisas pequenas.
    // Tu vem e altera para 10.5 e se esquece que precisa trocar para double... Pronto :/ temos um bug. 
    int pequeno = (p * 10);
    int medio = (m * 12);
    int grande = (g * 15);
    int total = (pequeno + medio + grande);

    printf ("O valor arrecadado foi R$ %.2d", total);

    return 0;
}