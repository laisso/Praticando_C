#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Notas[10];
    float soma;
    float media;

    for(int i = 0; i < 10 ; i++){
        printf("Digite a %d nota: ", i);
        scanf("%f", &Notas[i]);

        soma = soma + Notas[i];

    }

    media = soma/10;


    printf("\nA media das notas eh: %.2f\n", media);



    return 0;
}
