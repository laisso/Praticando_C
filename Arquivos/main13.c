#include <stdio.h>
#include <stdlib.h>

/*Aula 11 , Ler sexo, idade , peso e altura */

int main()
{
    char sexo ;
    int idade ;
    float peso, altura ;

    printf ("Digite sexo (f,F,m ou M), idade, peso e altura: \n");
    scanf ("%c%d%f%f",&sexo, &idade, &peso, &altura);
    printf ("Sexo: %c \n", sexo);
    printf ("idade: %d\n", idade);
    printf ("Peso: %.1f\n", peso);
    printf ("Altura: %.2f \n", altura);

    //buffer do teclado =>





    return 0;
}
