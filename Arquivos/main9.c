#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    printf("Digite um caracter: \n");

    letra = getc(stdin);

    printf("caracter lido: %c", letra);

    return 0;
}
