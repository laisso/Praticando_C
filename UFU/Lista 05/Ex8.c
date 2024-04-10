int main()
{
// Ex 8 Faça um programa que leia o numero de 1's que aparecem em uma string. Exemplo: "0011001" -> 3

// primeiro crio a variavel da string e a variavel que vai receber a quant de 1's
     char nums[100];
     int quantdeums = 0;
     
//Leitura da string e alocação

     printf("Digite um numero:");
     scanf("%s", nums);
     
// for para pecorrer a string até o ponto final que é o \0

     for(int i = 0; nums[i] != '\0'; i++){
// O se que aplica a condição de que nums[i] igual a '1' é adicionado na quantdeums++;
        if (nums[i] == '1'){
            quantdeums++;
        }

     }
    printf("Quantidade de 1's eh: %d", quantdeums);



    return 0;
}
