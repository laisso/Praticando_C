#include <stdio.h>
#include <stdlib.h>

struct Cadastro {
  int idade;
  char nome[20];
};

int main() {

  struct Cadastro C1;


  C1.idade = 13;
  sprintf (C1.nome, "Lais");


  printf("Minha idade: %d\n", C1.idade);
  printf("Meu nome: %s\n", C1.nome);

  return 0;
}
