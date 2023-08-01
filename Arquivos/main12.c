#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];// variável com capacidade para armazenar até 50 caracteres
    printf("Digite seu nome:");
    scanf("%s", nome );// %s é para leitura de uma sequência de caracteres, como por exemplo nome

    char sobrenome[50];
    printf("Digite seu sobrenome:");
    scanf("%s", sobrenome);

    printf("\nSeja Bem-vindo %s %s! \n", nome, sobrenome);

    char CPF[11];
    printf ("\nPorfavor, digite seu CPF: ");
    scanf("%s", CPF);
    printf ("\nConfirme se o CPF esta correto: %s \n", CPF);

    return 0;
