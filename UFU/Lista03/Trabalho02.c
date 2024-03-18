#include <stdio.h>
#include <stdlib.h>

int main()
{
    // faça um programa que receba 10 números inteiros
    int num[10]; // aqui eu coloquei um array que armazena 10 variáveis
    int pares = 0; // variável pares para guardar soma dos pares
    int impares = 0; // variável impares para guardar num impares



    for ( int i = 1 ; i <= 10; i++ ){ // for criado para receber 10 números inteiros

        printf("Digite o %d numero inteiro:\n", i); // esse %d indica em qual posição está a minha repetição, achei legal
        scanf("%d", &num[i]); // coloco meu array num[i] para receber os números digitados pelo usuário

    if(num[i] %2 == 0) { /* aqui eu coloquei na condição a porcentagem % - que significa resto, no caso resto de 2 == 0 significa que meu
            número é par, porque todo número divisiveu por 2 tem o resto 0 */

        printf("O %d eh par\n\n", num[i]);
        pares = pares + num[i]; // aqui eu somo meus pares

      }else{
       impares++; // aqui eu incremento todos aqueles que são impares

      }

    }

    printf("\nSoma dos numeros pares eh: %d\n\n", pares);

    printf("Quantidade de impares eh: %d\n\n", impares);


    printf("Numeros impares digitados:\n\n");

    for (int i = 1; i <= 10; i++) { // esse for é para selecionar todos os números impares e indicar na tela
        if (num[i] % 2 != 0) { /* a condição if nos diz que todo número impar tem como resto diferente de 0, assim eu ensino para o computador o que são números impares */
            printf("%d\n", num[i]);
        }
    }


    return 0;
}
