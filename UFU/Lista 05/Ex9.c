#include <stdio.h>
#include <stdlib.h>

int main()
{
//9. Escreva um programa que substitui as ocorrências de um caractere '0' em um outro caractere '1'

   char str[100];
    printf("Digite um numero com 0:");
    scanf("%s", str);

    for(int i = 0; str[i]!= '\0'; i++){
        if(str[i] == '0'){
            str[i] = '1';
        }
    }
    printf("string modificada: %s",str);

    return 0;
}
