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


    return 0;
}
