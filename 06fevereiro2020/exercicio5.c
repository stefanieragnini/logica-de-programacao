#include <stdio.h>
int main () {

    double valor, dinheiro;

    printf ("Insira o valor que voce quer abastecer");
    scanf  ("%lf", &dinheiro);
    printf ("insira o preco do litro da gasolina"); // Muito bom isso, ajuda o usuário a entender o que precisa digitar
    scanf  ("%lf", &valor);

    double litros = dinheiro / valor;

    printf ("Voce consegue abastecer %.2lf litros com esse valor", litros);

    return 0;
}
// Muito bom, usou bem os tipos de novo
