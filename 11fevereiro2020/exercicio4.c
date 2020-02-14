#include <stdio.h>
int main () {

    double valor;

    printf ("Insira o valor");
    scanf  ("%lf", &valor);

    // Boa lógica, porém podes usar o else
    // Se cair no primeiro if todos os outros vão ser testados sem necessidade
    // Então existe processamento sem necessidade
    // Como expliquei o else vai executar se o if der falso
    // Podes encadear vários else if
    // Se tu não entender, me chama que explico melhor ;)
    // TE AMO <3
    if (valor <0 || valor > 100.000) {
        printf ("FORA DE INTERVALO");
    }
    else (valor >= 0 && valor <= 25.0000) {
        printf ("INTERVALO [0,25]\n");
    }
    else (valor >= 25.00001 && valor <= 50.0000) {
        printf ("INTERVALO [25,50]\n");
    }
    else (valor >= 50.00001 && valor <= 75.0000) {
        printf ("INTERVALO [50,75]\n");
    }
    else (valor >= 75.00001 && valor <= 100.0000) {
        printf ("INTERVALO [75,100]\n");
    } 
   

    return 0;
}