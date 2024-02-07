#include <stdio.h>
#include <stdlib.h>

// Criando uma calculadora

int main()
{
    // 1 passso: A calculadora deve perguntar para o usuário qual tipo de operação quer fazer
   // 2 e 3 passo: A calculadora deve perguntar qual é o 1 e 2 numero para fazer o cálculo
   // 4 passo: A calculadora vai verificar qual foi a operação solicitada
   // 5 passo: A calculadora vai calcular e imprimir o resultado na tela

   char operacao;
   double numero1, numero2 , Resultado;

   printf("Bem-vindo(a) a calculadora\n");
   printf("Digite a operacao que deseja fazer(+, - , *, /):\n");
   scanf ("%c", &operacao);

   // numero 1
   printf("Digite o primeiro numero:");
   scanf("%lf", &numero1);
   // numero 2
   printf("Digite o segundo numero:");
   scanf("%lf", &numero2);

   switch(operacao){ // expressão
      case '+':// caso
        Resultado = numero1 + numero2;
        break;

      case '-' :
        Resultado = numero1 - numero2;
        break;// finaliza o codigo

      case '*' :
        Resultado = numero1 * numero2;
        break;

      case '/' :
        if(numero2 == 0) // igual é ==
        {
            printf("Divisao por 0 nao eh permitida");
            return 1; // para finalizar código
        } else {
        Resultado = numero1/numero2;
        }
        break;

      default:

        printf("Erro, voce escreveu uma operacao invalida!");
        return 0;

   }

   printf("Resultado da operacao eh %.2lf %c %.2lf = %.2lf", numero1,operacao,numero2,Resultado );




    return 0;
}
