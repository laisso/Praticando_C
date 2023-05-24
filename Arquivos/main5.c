#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor, valor2 ; // criei uma variavel para guardar um valor do tipo inteiro


    // atribuição -> atribuir um valor a uma variavel

    valor = 50;

    printf("digite sua idade:");
    scanf("%d", &valor);

    printf("digite a idade de sua mae:");
    scanf("%d", &valor2);


    printf ("\n\n Sua idade:%d \n\n", valor); // variável valor fica depois da vírgula e fora das aspas
    printf (" Idade mae:%d \n\n", valor2);


    return 0;
}
