#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Exercício 3 -Peça para o usuário digitar três valores inteiros e imprima a soma deles.

    int num1, num2, num3 ;
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int soma = num1 + num2 + num3;

    printf("A soma de %d + %d + %d = %d", num1,num2, num3,soma );

    return 0;
}
