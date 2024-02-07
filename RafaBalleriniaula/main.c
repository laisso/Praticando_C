#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 21;

    printf("A idade de Lais eh %d\n", idade);
    printf("Pssaram 4 anos...\n");

    // idade = idade + 4
    idade += 4;

    printf ("A idade de Lais eh %d\n", idade );

    printf("Voltaram 5 anos...\n");

    idade -= 5;

    printf("A idade de lais eh %d", idade);
    


    return 0;
}
