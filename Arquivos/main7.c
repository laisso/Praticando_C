#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo = 's';
    printf("Valor da variavel sexo: %c\n",sexo);// Aqui o sexo já esta definido

    printf("Digite seu sexo:(f,F,m ou M)\n");// Aqui eu quero que o usuário me retorne um valor
    scanf ("%c",&sexo );

    printf ("Sexo: %c", sexo);

    return 0;
}
