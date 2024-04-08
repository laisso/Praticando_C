#include <stdio.h>
#include <stdlib.h>

int main()
{

 /*Exercício 6, Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra "Aceita",
 caso contrário imprimir "Não aceita" */


 char nome[20];
 printf("Digite seu nome:");
 scanf("%s", nome);

 char sexo;
 printf("Digite se seu sexo(F ou M):");
 scanf(" %c", &sexo);

 int idade;
 printf("Digite sua idade:");
 scanf("%d", &idade);

 if (sexo == 'F' && idade < 25 ){
    printf("%s ACEITA!\n", nome);

 }else{
    printf("NAO ACEITA!\n");
 }



return 0;

}
