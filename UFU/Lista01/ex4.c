#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Exercício 4 - Leia um número real e imprima o resultado do quadrado desse número.

    float num1 ;
    printf("Digite um numero real: ");
    scanf("%f", &num1);

    float quadrado = num1*num1;

    printf("O quadrado do seu numero real eh = %.2f", quadrado );

    return 0;
}
