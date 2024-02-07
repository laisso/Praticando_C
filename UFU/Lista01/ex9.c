#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercício 09
    // Lendo uma temperatura em graus Celsius

    float C ;

    printf("Digite a temperatura em graus Celsius:");
    scanf("%f", &C);

    // Conversão em Kelvin

    float K = C + 273.15;

    printf("A conversao da temperatura para Kelvin eh: %.2f \n", K);





    return 0;
}
