#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];

    int soma;

    for( int i = 0 ; i<10 ; i++){

       printf("Digite o %d numero:", i);
       scanf("%d", &num[i]);
       soma = soma + num[i] ;
    }
    printf("Soma dos numeros digitados eh: %d ", soma);

    return 0;
}
