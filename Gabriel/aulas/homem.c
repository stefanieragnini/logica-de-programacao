#include <stdio.h>

int main() {

    float a, b ,c; 

    scanf("%f%f%f", &a, &b, &c);
    
    float mult = a * b * c;
    float formula1 = a * b / c;
    float formula2 = a * a + b + 5 * c;
    float formula3 = mult + b + (c/3) * 5 - 1;
    float formula4 = mult * mult * mult / 2;

    printf ("O Ambrosio é chato mas o resultado das formulas é %f %f %f %f\n", formula1, formula2, formula3, formula4);




  return 0;  
}