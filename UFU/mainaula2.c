#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415 // define é algo que não pode ser alterado jamais em meu código

int main()

{
    printf("------------------------------------------------------------------------------------------------------------------ \n\n");

    //Declaração de variáveis
    int media = 1 ;
    // valores com vírgula de precisão simples
    float nota = 8.6;
    // notação científica para números reais
    double aleatorio = 0.000074;

    printf("O valor de media: %d \n\nO valor da nota : %.1f \n\naleatorio : %f \n\n", media, nota, aleatorio);

    // Regra para variável, sem espaços,acentos, palavras reservadas,não começar com números

    printf("------------------------------------------------------------------------------------------------------------------ \n\n");

    // soma simples

    int x = 5;
    int y = 10;

    int resultado = x+y ;

    printf ("%d + %d = %d \n\n", x , y , resultado );

    printf("------------------------------------------------------------------------------------------------------------------ \n\n");

    // soma simples pedindo para o usuário o valor dar variáveis a e b

    int a, b ;

    printf ("digite dois numeros inteiros para somar:");
    scanf ("%d %d", &a, &b);
    int soma = a + b;
    printf ("\nSoma: %d + %d = %d\n\n", a , b, soma);

    printf("------------------------------------------------------------------------------------------------------------------ \n\n");

    // Soma do PI declarado em #define mais a variável a que o usuário escolher

    float conclusao = a + PI ;

    printf ("%d + %f = %f\n", a, PI, conclusao );

    printf("\n------------------------------------------------------------------------------------------------------------------ \n\n");








    return 0;
}
