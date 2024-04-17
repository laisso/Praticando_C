#include <stdlib.h>
#include <string.h>

int main()
{
    //Digite um nome, calcule e retorne quantas letras tem esse nome

    char nome [100];
    int comprimento = 0;

    printf("Digite seu nome:");
    fgets(nome, 100 , stdin);

    while(nome[comprimento] != '\0'){
        comprimento++;
    }
     comprimento --;
    printf("O comprimento do seu nome eh: %d", comprimento);


    return 0;
}
