#include <stdio.h>
int main () {

    int segundos; 
    
    scanf ("%d", &segundos);

    int hora = segundos / 3600;
    int minutos = segundos / 60 - (hora * 60);
    int segundos2 = segundos - (minutos * 60) - (hora * 3600);

    printf ("%d:%d:%d", hora, minutos, segundos2);

    return 0;
}