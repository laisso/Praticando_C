#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercício 08
    // Lendo uma temperatura em graus Kelvin

    float K ;

    printf("Digite a temperatura em graus Kelvin:");
    scanf("%f", &K);

    // Conversão em celsius

    float C = K - 273.15;

    printf("A conversao da temperatura para Celsius eh: %.2f \n", C );



    return 0;
}
