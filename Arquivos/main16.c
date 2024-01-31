#include <stdio.h>
#include <stdlib.h>

  /*    Aula 16
    operador sizeof
  sizeof x ou sizeof(int)

  */


int main()
{
    float x = 1.0;
    printf("tamanho de um float na memoria: %d bytes\n", sizeof x ); // sizeof não é uma função, é um operador ou constante
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));


    return 0;
}
