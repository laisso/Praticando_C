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

// Segunda forma de fazer o exercício 

/* int main()
{
    // Faça um programa que leia um nome e imprima as 4 primeiras letras do nome

    char nome[20];

    printf("Digite um nome:");
    scanf("%s", nome);


    printf("As primeiras quatro letras do seu nome eh :");

    for(int i = 0 ; i < 3 ; i++){
        printf("%c", nome[i]);
    }

    printf("\n");*/

    return 0;
}
