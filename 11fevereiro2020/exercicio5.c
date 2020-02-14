#include <stdio.h>
int main () {

     double salario;

    printf ("Insira o valor do seu salario");
    scanf  ("%lf", &salario);

    // Se tu observar, repetisse código, várias vezes
    // da parte do reajuste até o último printf é genérico
    // a única coisa que muda é que o percentual altera dependendo o salário
    
    // Podes criar a variável percentual fora dos ifs e alterar ela nos ifs
    // E podes tirar o código repetido dos ifs e colocar no final do código
    // Desse jeito a única coisa que vai mudar é o percentual e no final o cálculo é executado normalmente
    // Tens que perceber que podes colocar códigos que serão executados depois dos ifs

    // Outra coisa que falei no exercício 4 é que podes usar o else
    // para não executar todos os ifs
    if (salario >= 0 && salario <= 400.00) {
        double percentual = 0.15;
        double reajuste = salario * percentual;
        double novo_salrio = salario + reajuste;
        printf ("Novo salario: R$ %.2lf\n", novo_salrio);
        printf ("Reajuste ganho: R$ %.2lf\n", reajuste);
        printf ("Em percentual: %.2lf por cento \n", percentual);
    }
    if (salario >= 400.01 && salario <= 800.00) {
        double percentual = 0.12;
        double reajuste = salario * percentual;
        double novo_salrio = salario + reajuste;
        printf ("Novo salario: R$ %.2lf\n", novo_salrio);
        printf ("Reajuste ganho: R$ %.2lf\n", reajuste);
        printf ("Em percentual: %.2lf por cento \n", percentual);
    }
    if (salario >= 800.01 && salario <= 1200.00) {
        double percentual = 0.10;
        double reajuste = salario * percentual;
        double novo_salrio = salario + reajuste;
        printf ("Novo salario: R$ %.2lf\n", novo_salrio);
        printf ("Reajuste ganho: R$ %.2lf\n", reajuste);
        printf ("Em percentual: %.2lf por cento \n", percentual);
    }
    if (salario >= 1200.01 && salario <= 2000.00) {
        double percentual = 0.07;
        double reajuste = salario * percentual;
        double novo_salrio = salario + reajuste;
        printf ("Novo salario: R$ %.2lf\n", novo_salrio);
        printf ("Reajuste ganho: R$ %.2lf\n", reajuste);
        printf ("Em percentual: %.2lf por cento \n", percentual);
    }
    if (salario > 2000.00) {
        double percentual = 0.04;
        double reajuste = salario * percentual;
        double novo_salrio = salario + reajuste;
        printf ("Novo salario: R$ %.2lf\n", novo_salrio);
        printf ("Reajuste ganho: R$ %.2lf\n", reajuste);
        printf ("Em percentual: %.2lf por cento \n", percentual);
    }
    return 0;
}