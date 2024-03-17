#include <stdio.h>
#include <stdlib.h>

// faça um programa que leia 10 inteiros e imprima sua média


int main(){

    float soma = 0;
    float num;

    for (float i = 0 ; i < 10 ; i++){
        printf("Digite um numero inteiro:");
        scanf("%f", &num);
        soma = soma + num;
    }
    float media = soma/10;
    printf("A media dos numeros eh: %.2f\n", media);


    return 0;
}
