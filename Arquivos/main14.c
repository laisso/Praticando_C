#include <stdio.h>
#include <stdlib.h>

/*
   Aula 12, ler dois caracteres

*/

int main()

{
    char a, b ;

    printf ("Digite duas letras: ");
    scanf("%c %c", &a, &b);

    printf("primeira letra: %c \nsegunda letra: %c\n", a, b);

   /* testando buffer(espaço) do teclado => "%c%c" precisa de espaço entre eles para funcionar, porque meu programa vai entender 
    o buffer como um caracter, portanto fica "%c %c" */



    return 0;
}
