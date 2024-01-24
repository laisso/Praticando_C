#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Exercício 5 - Leia um numero real e imprima a quinta parte desse numero
     float Numero;
     printf("Digite um numero real:");
     scanf("%f", &Numero);

     float divide = Numero / 5;

     printf("A quinta parte do numero %.2f : %.2f",Numero, divide);

    return 0;
}
