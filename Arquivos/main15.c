#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a , b ;
    printf("Digite uma letra: ");
    scanf ("%c", &a);

    printf("Digite uma letra: ");
    scanf (" %c", &b);


    // espaço entre os %c -> comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO
   // Buffer =>
   // fflush(); 100%

   printf("primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
