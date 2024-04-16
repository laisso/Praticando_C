#include <stdio.h>
#include <stdlib.h>

struct Cadastro {
  int idade;
  char nome[50];
};

int main() {
  struct Cadastro C1;

  printf("Digite sua idade: ");
  scanf("%d", &C1.idade);

  printf("Digite seu nome: ");
  scanf("%s", C1.nome);

  printf("Minha idade: %d\n", C1.idade);
  printf("Meu nome: %s\n", C1.nome);

  return 0;
}
