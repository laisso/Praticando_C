#include <stdio.h>

struct Aluno {
    char nome[100];
    int codigo;
    float nota;

};

int main(){

    struct Aluno alunos[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do %d aluno: ", i+ 1);
        scanf("%s", alunos[i].nome);

        printf("Dgite o codigo do %d aluno:", i+1);
        scanf("%d", &alunos[i].codigo);

        printf("Digite a nota do %d aluno:", i+1);
        scanf("%f", &alunos[i].nota);

    }

    printf("\nAlunos com nota maior que 60:\n ");

    for(int i = 0; i<5; i++){
        if(alunos[i].nota > 60){
          printf("Nome do aluno: %s\n", alunos[i].nome);
          printf("Codigo do aluno: %d\n", alunos[i].codigo);
          printf("nota do aluno: %.2f\n ", alunos[i].nota);
          printf("\n");
        }
    }




return 0;

}
