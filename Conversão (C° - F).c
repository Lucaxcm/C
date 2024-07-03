#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
  int TipoDeConvercao, k, b;
  printf("Qual tipo de converção você deseja fazer?");
  printf("\n\n1 - Celsius para Fahrenheit\n");
  printf("2 - Fahrenheit para Celsius\n--> ");
  scanf("%d", &TipoDeConvercao);
  START:
  switch(TipoDeConvercao){
    
    case 1:
      printf("Digite a temperatura em Celsius: ");
      scanf("%d", &k);
      b = (k * 9/5) + 32;
      printf("A temperatura em Fahrenheit é: %d", b);
      break;
    
    case 2:
      printf("Digite a temperatura em Fahrenheit: ");
      scanf("%d", &k);
      b = (k - 32) * 5/9;
      printf("A temperatura em Celsius é: %d", b);
      break;
   
    default:
      printf("\nValor Invalido, deseja tentar novamente?");
      printf("\n\n1 - Sim\n2 - Não\n--> ");
      scanf("%d", &b);
      if (b == 1){
        printf("\nQual tipo de converção você deseja fazer?");
        printf("\n\n1 - Celsius para Fahrenheit\n");
        printf("2 - Fahrenheit para Celsius\n--> ");
        scanf("%d", &TipoDeConvercao);
        goto START;}
      else{
        printf("Até mais!");
        break;}
  }}
