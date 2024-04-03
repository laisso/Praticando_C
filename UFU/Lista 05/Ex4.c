#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faça um programa que leia um nome e imprima as 4 primeiras letras do nome

    char nome[20];

    printf("Digite um nome:");
    fgets(nome,5, stdin);

    printf("As 4 primeira letras do nome eh:%s", nome);


    return 0;
}
