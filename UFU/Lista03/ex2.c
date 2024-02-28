#include <stdio.h>
#include <stdlib.h>

int main(){
/* Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repetição for
  a segunda while, e a terceira "do while"  */

  // primeira repetição - for

  for (int i = 1; i <= 100; i++){
    printf("%d\n", i);

  }

// segunda repetição

  int l = 1 ;
  while(l <= 100){
    printf("%d\n", l);
    l++;
  }

  //terceira repetição 
  int a = 1;
  do{
    printf("%d\n", a);
    a++;
  }while(a <= 100);






 return 0 ;
}
