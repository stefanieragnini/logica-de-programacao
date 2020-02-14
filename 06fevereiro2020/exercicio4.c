#include <stdio.h> 
int main () {

    // GABRIEL: Bom, aqui como a gente viu. Podes utilizar a string
    // Recomendo tu utilizar ela aqui, e testar o programa de novo
    char nome;
    int idade;

    printf ("Insira seu nome");
    scanf  ("%s", &nome);
    printf ("Insira a sua idade em anos");
    scanf  ("%d", &idade);

    // Muito boa a separação das palavras no nome da variável
    // Existem 3 formas de tu separar as palavras
    // A que tu usou é chamada de Snake Case (parece uma cobra) seria assim: nome_da_pessoa
    // Outra forma é o Camel Case (parece um camelo) seria assim: nomeDaPessoa
    // A terceira seria tudo junto sem alteração: nomedapessoa
    // O uso depende da linguagem, java é usado Camel Case, já no Python é usado Snake Case
    // Aqui recomendo você usar a que se sente mais à vontade, porém isso pode mudar em outras linguagens
    // Em C seria tudo junto diasdevida
    double dias_de_vida = (idade * 365);

    printf ("Voce ja viveu %.0lf dias", dias_de_vida);

    return 0;
}