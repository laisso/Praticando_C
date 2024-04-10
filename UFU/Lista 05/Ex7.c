#include <stdio.h>
#include <stdlib.h>

int main(){
//ex 7 Crie um programa que compara duas strings(Não use a função strcmp)

char str1[100];
char str2[100];

printf("Digite a primeira string:");
scanf("%s",str1);

printf("Digite a segunda string:");
scanf("%s",str2);

int i = 0;
int igual = 1; // digamos que as strings são iguais

while(str1[i] !='\0' || str2[i] != '\0'){
    if(str1[i] != str2[i]){
        igual = 0;
        break;
    }
    i++;
}

if(igual){
    printf("As strings sao iguais\n");
}else{
    printf("As strings sao diferentes\n");
}
return 0;

}
