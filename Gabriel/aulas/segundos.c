#include <stdio.h>

int main () {
    
    int minutos; 
    
    scanf( "%d", &minutos);
  
    int segundos =  minutos * 60;
    
    printf("O resultado em segundos é %d\n", segundos);

    return 0;

}