#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercício 6 - ler uma temperatura em graus celsius e apresentar ela em graus Fahrenheit.
    // formula de conversão  F = C *(9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em celsius

    float C; //Celsius

    printf("Digite a temperatura em Celsius:");
    scanf("%f", &C);

    float F = C *(9.0/5.0) + 32.0 ;

    printf ("A conversao da temperatura para Fahrenheit eh: %2.f \n", F);





    return 0;
}
