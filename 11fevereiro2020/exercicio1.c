#include <stdio.h>

int main() {
    int A, B, C, D;
    scanf ("%d%d%d%d", &A, &B, &C, &D);

    // Muito boa a lógica relacional, porém 0 não é positivo e C,D >= 0
    if (B > C && D > A && (C + D) > (A + B) && C,D >=0 && (A%2==0)) {
        printf ("VALORES ACEITOS");
    } else {
        printf ("VALORES NÃO ACEITOS");
    }

    return 0;
}