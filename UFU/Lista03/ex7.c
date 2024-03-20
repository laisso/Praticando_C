#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média
    float soma;
    float num;

    for(int i = 1; i <= 10 ; i++){
        printf("Digite o %d numero inteiro positivo:", i);
        scanf("%f", &num);

        if(num >= 0){
            soma = soma + num;
        }else{
         printf("Erro!");
         return 0;
        }

    }

    float media = soma/10;

    printf("A media eh: %.2f", media);

    return 0;
}
