#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0


    // i é os múltiplos de 3
    int i = 1;
    int multiplica;

    while(i < 6){

        multiplica = 3 * i ;
        i++;
        printf("%d\n", multiplica);

    }

    return 0;
}
