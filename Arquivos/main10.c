#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    printf("Digite um caracter:");
    // funcao fgetc é para leitura de arquivos, mas também pode fazer leitura do teclado
    letra = fgetc(stdin);
    printf("Caracter lido: %c",letra);

    return 0;
}
