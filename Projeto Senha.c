#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int reset(){
  printf("\033[0;37m");
}

int main(){


  char senha[8], v[8], k;
  int a, b, c, d, e, f, Validacao = 0, cor[8];

    srand((unsigned)time(NULL));
    char i1; i1 = rand() % (47 - 33 + 1) + 33;   // VARIAVEL ALEATORIO SIMBOLO
    char i2; i2 = rand() % (90 - 65 + 1) + 65;   // VARIAVEL ALEATORIO LETRA MAIUSCULA
    char i3; i3 = rand() % 9;                    // VARIAVEL ALEATORIO NUM
    char i4; i4 = rand() % 9;                    // VARIAVEL ALEATORIO NUM
    char i5; i5 = rand() % 9;                    // VARIAVEL ALEATORIO NUM
    char i6; i6 = rand() % (96 - 91 + 1) + 91;   // VARIAVEL ALEATORIO SIMBOLO
    char i7; i7 = rand() % (122 - 97 + 1) + 97;  // VARIAVEL ALEATORIO LETRA MINUSCULA
    char i8; i8 = rand() % 2;                    // VARIAVEL SUPREMA   ALEATORIO

    i8 = (i8 == 0) ? rand() % (90 - 65 + 1) + 65 : rand() % (122 - 97 + 1) + 97; 


    v[0] = i1; v[1] = i2; v[2] = i3; v[3] = i4; v[4] = i5; v[5] = i6; v[6] = i7; v[7] = i8;

   printf("Senha: ");
   for(k=0;k<8;k++){(k < 2 || k > 4) ? printf("%c", v[k]) : printf("%d", v[k]);}

    printf("\n\nDicas, a Senha Contém 8 Digitos, Variação Entre Letras Numeros e Caracteres Especiais!");
    printf("\n\nDigite Sua Senha: ");
    scanf("%s", senha);

while(!Validacao){

  for(k=0;k<8;k++){cor[k] = 0;}

  for(k=0;k<8;k++){

    if(k<2){

      if(v[k] == senha[k]){cor[k] = 1;}} //CONFERE LETRAS OU CARACTERES ESPECIAIS

    if(k==2){
      a = v[2] +48;
      d = senha[2];

      if(d == a){cor[k] = 1;}}

    if(k==3){
      b = v[3] +48;
      e = senha[3];

      if(e == b){cor[k] = 1;}}

    if(k==4){
      c = v[4] +48;
      f = senha[4];

      if(f == c){cor[k] = 1;}}

    if(k>4){

      if(v[k] == senha[k]){cor[k] = 1;}}} //CONFERE LETRAS OU CARACTERES ESPECIAIS

  printf("\n\nCONFERENCIA: ");
  for(k=0;k<8;k++){
    if(cor[k] == 1)
    {  
      printf("\033[0;32m");
      printf("%c", senha[k]);
      reset();
    }
    else
    {
      printf("\033[0;31m");
      printf("%c", senha[k]);
      reset();
    }
  }

  
  for(k=0;k<8;k++){
    if(cor[k] == 0){
  printf("\n\nVocê Errou Tente Novamente\n\n--> ");
  scanf("%s", senha); break;}
    if((k == 7) && (cor[k] == 1)){
      printf("\n\nACESSO LIBERADO\U0001F631");
      Validacao = 1;}}}}
