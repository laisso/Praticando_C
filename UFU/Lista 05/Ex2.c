#include <stdlib.h>

int main()
{
    // Crie um programa que calcula o comprimento de uma string(Não use a função strlen)

    char string[100];
    int comprimento = 0;

    printf("Digite uma String:");
    fgets(string, 100,stdin); // eu adiciono a variavel, o tamanho dela e a função de impute para receber os dados do usuário

    while(string[comprimento] != '\0'){
        comprimento++;
    }

    
    printf("O comprimento da string eh: %d\n", comprimento);


    return 0;
}
