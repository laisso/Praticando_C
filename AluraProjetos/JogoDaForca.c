#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

 char PalavraSecreta[20];

 sprintf(PalavraSecreta, "MELANCIA"); // sprintf recebe MELANCIA

 int acertou = 0;
 int enforcou = 0;

 char chutes [26];
 int tentativas = 0;


 do{

    for(int i = 0 ; i < strlen(PalavraSecreta); i++){

        int achou = 0;

        for(int j = 0; j < tentativas; j++){
            if(chutes[j] == PalavraSecreta[i]){
            achou = 1;
            break;
        }
    }


    if (achou){
        printf("%c ", PalavraSecreta[i]);
    }else{

    printf("_ ");
    }
}

    printf("\n");

    char chute;
    scanf(" %c", &chute);

    chutes[tentativas] = chute ;
    tentativas++ ;

}while(!acertou && !enforcou);




return 0;

}
