#include <stdio.h>
#include <stdlib.h>

int main()
{

 // Exercício 5

 // Digite um nome, calcule e retorne quantas letras tem esse nome

 char nome[20];
 int QuantLetrasNome = 0;

 printf ("Dgite um nome:");
 scanf("%s", nome);

 while(nome[QuantLetrasNome] != '\0'){
    QuantLetrasNome++;
 }

 printf("Quantidade de letras no nome eh: %d\n", QuantLetrasNome);



return 0;

}
