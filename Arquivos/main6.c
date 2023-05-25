#include <stdio.h>
#include <stdlib.h>

int main()
{
    // tipo nome
    float numero = 3.1415;
    printf("Valor da minha variavel: %.2f\n\n", numero);
    printf ("Digite um numero real:");
    scanf("%f",&numero);
    printf ("valor lido: %.3f",numero);


    return 0;
}
