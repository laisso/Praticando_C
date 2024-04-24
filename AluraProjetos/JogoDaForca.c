#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

char PalavraSecreta[20];

sprintf(PalavraSecreta, "MELANCIA"); // sprintf recebe MELANCIA

int acertou = 0;
int enforcou = 1;


do{
// comecar o nosso jogo!!

char chute;
scanf("%c", &chute);

for(int i = 0; i < strlen(PalavraSecreta); i++){
    if(PalavraSecreta[i]== chute){
        printf("A posicao %d tem essa letra!\n", i);
    }
}

}while(!acertou && !enforcou);




return 0;

}

