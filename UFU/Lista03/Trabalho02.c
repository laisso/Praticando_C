#include <stdio.h>
#include <stdlib.h>



int main()
{
    // Questão 4

    int num[10];
    int pares = 0;
    int impares = 0;

    for ( int i = 1 ; i <= 10; i++ ){
        printf("Digite o %d numero inteiro:\n", i);
        scanf("%d", &num[i]);

    if(num[i] %2 == 0) {
        printf("O %d eh par\n\n", num[i]);
        pares = pares + num[i];

    }else{
        impares++;

      }


    }
        printf("\nSoma dos numeros pares digitados eh: %d\n\n", pares);
        printf("Quantidade de numeros impares digitados eh: %d\n\n", impares);
        printf("Numeros impares digitados:\n\n");

    for (int i = 1; i <= 10; i++) {

    if (num[i] % 2 != 0) {
        printf("%d\n", num[i]);

        }
    }


    return 0;
}
