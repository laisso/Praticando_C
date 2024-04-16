#include <stdio.h>
#include <stdlib.h>

struct Cadastro {
  int idade;
  char nome[50];
};

int main() {
  struct Cadastro C1;
  struct Cadastro C2;

  printf("Digite idade do primeiro participante: ");
  scanf("%d", &C1.idade);

  printf("Digite o nome do primeiro participante: ");
  scanf("%s", C1.nome);

  printf("Digite idade do segundo participante:");
  scanf("%d", &C2.idade);

  printf("Digite o nome do segundo participante:");
  scanf("%s", C2.nome);

  printf("\n");

  printf("Participantes do jogo: \n\n");

  printf("Primeiro participante: %s, idade: %d\n", C1.nome, C1.idade);
  printf("Segundo participante: %s, idade: %d\n", C2.nome, C2.idade);



  return 0;
}
