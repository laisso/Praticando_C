#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, imprimindo seu valor na
    tela, até que seu valor seja 100,000*/

    int i = 0;
    int soma;

    while(i <= 100000){
        printf("%d\n",i);
        i = i + 1000;
    }

    return 0;
}
