#include <stdio.h>
#include <stdlib.h>

  /*          Aula 17
    operador short para o tipo int
    intervalo: -32.768 até 32.767
             %hi oi %d

  */


int main()
{
    int y = 0;
    short int x = 32767;
    printf("tamanho de um int na memoria: %d bytes\n", sizeof y );
    printf("Tamanho em memoria de short int: %d bytes\n", sizeof x );
    
    // o operador short estende a memória do meu int

    return 0;
}
