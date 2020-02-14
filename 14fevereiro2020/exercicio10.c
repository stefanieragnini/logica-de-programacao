#include <stdio.h>

int main () {
   int a, b, c;
   printf ("Insira as medidas dos lados do triangulo");
   scanf  ("%d%d%d", &a, &b, &c);

   if (a == b && a == c && b == c) {
       printf ("TRIANGULO EQUILATERO");
   } else if (a == b || a == c || b == c) {
       printf ("TRIANGULO ISOSCELE");
   } else if (a != b || a != c || b != c) {
       printf ("TRIANGULO ESCALENO");
   }

    return 0; 
}