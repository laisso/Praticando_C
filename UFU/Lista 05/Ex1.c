#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faça um programa que leia uma string e a imprima

    char nome[10];

    printf("Escreva seu nome:");
    scanf("%s", nome);

    printf("Seu nome eh: %s", nome);
    return 0;
}
