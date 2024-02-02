#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main()
{

    printf("Vamos calcular o volume do cilindro!\n\n");

    double raio ;
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    double altura;
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura); // para Double é %lf

    double Volume;
    Volume = pi * (raio * raio) * altura;

    printf("Valor do Volume: %lf\n", Volume);

    return 0;
}
