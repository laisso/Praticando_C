#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Entre com um nome e imprima o nome somente se a primeira letra do nome for 'a'(Maiúsculo ou minúsculo)

    char nome[20];

    printf("Digite um nome com a letra 'a' ou 'A':");
    fgets(nome,20,stdin);

    if (nome[0]== 'a'|| nome[0] == 'A'){
        printf("O nome eh: %s\n", nome);
    } else{
     printf("Nome nao eh com A ou a!");
    }


    return 0;
}
