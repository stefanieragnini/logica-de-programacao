#include <stdio.h>
int main () {

    int cavalos;

    printf ("Insira a quatidade de cavalos comprados");
    scanf ("%d", &cavalos);

    int ferraduras = (cavalos * 4);

    printf ("Serao necessarias %d ferraduras para equipar todos os cavalos comprados", ferraduras);

    return 0;
}

// GABRIEL: Muito bom