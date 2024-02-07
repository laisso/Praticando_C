#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercício 7 - ler uma temperatura em graus Faherenheit e apresentar ela em graus Celsius.
    // formula de conversão  C = 5.0 *(F-32.0)/9.0

    float F; //Celsius

    printf("Digite a temperatura em Faherenheit:");
    scanf("%f", &F);

    float C = 5.0 *(F - 32.0)/9.0;

    printf ("A conversao da temperatura para Celsius eh: %2.f \n", C);





    return 0;
}
