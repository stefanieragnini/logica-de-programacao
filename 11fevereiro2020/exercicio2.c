#include <stdio.h>

int a, b, negativo, positivo, par, impar;

int main() {
    
    a = 5;

    // Aqui não é preciso usar o while, podes fazer vários ifs
    // Vai ser um monte de ifs, porém tu exercita a escrita das condições e dos ifs
    // Mas pode deixar assim, espero que tu entenda o conceito desse while e o que ele tá fazendo
    // Caso tu não entenda, só me falar que explico
    while (a--) {
        printf ("Digite 5 numeros:");
        scanf  ("%d", &b);
        if (b < 0)
            negativo++;
        else if (b > 0)
            positivo++;
        if (b % 2 == 0)
            par++;
        else
            impar++; 
    }
    printf ("%d valor(es) par(es)\n", par);
    printf ("%d valor(es) impar(es)\n", impar);
    printf ("%d valor(es) positivo(s)\n", positivo);
    printf ("%d valor(es) negativo(s)\n", negativo);

    return 0;
}