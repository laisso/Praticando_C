#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro {
  int idade;
  char nome[100];
  char endereco[100];
  char DataNascimento[11]; // verificar se ta correto e retornar um erro
  char Cidade[100];
  char CEP[9];// verificar se ta correto e retornar um erro
  char Email[100];// verificar se ta correto e retornar um erro


};

int main() {
  struct Cadastro C1;

  printf("Digite seus dados pessoais:\n\n");

  printf("Digite idade:");
  scanf("%d", &C1.idade);


  while (getchar() != '\n');/* para Limpar buffer de entrada do scanf e fazer o fgets funcionar, mas você pode colocar tudo que é usado 
  fgets antes do scanf que funciona também */

  printf("Digite seu nome: ");
  fgets(C1.nome, 100 , stdin);

  printf("Digite seu endereco:");
  fgets(C1.endereco, 100, stdin);

  printf("Digite sua Cidade:");
  fgets(C1.Cidade, 100, stdin);



  printf("\n");


  printf("Cliente cadastrado:\n\n");

  printf("Idade:%d \n",C1.idade);
  printf("Nome:%s \n",C1.nome);
  printf("Cidade:%s \n",C1.Cidade);
  printf("Endereco:%s \n",C1.endereco);








  return 0;
}


