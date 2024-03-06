#include <stdio.h>
#include <stdlib.h>

// Faça um programa que peça ao usuário para digitar 10 valores e some-os.

int main(){

    int soma= 0;

    for(int i = 0 ; i < 10; ++i){
        int valor;
        printf("Digite um valor: ");
        scanf("%d", &valor);
        soma += valor;

    }

    printf("A soma dos valores eh: %d\n", soma);

    return 0;
}
