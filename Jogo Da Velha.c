#include <stdio.h>

void printinicial(){
  printf("BEM VINDO AO JOGO DA VELHA!\n");
  printf("\nEXEMPLO DE COMO ESCOLHER LOCAL QUE DESEJA JOGAR\n\n");
  printf("7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3");

  printf("\n\nO JOGAR 1 SERÁ X");
  printf("\nO JOGAR 2 SERÁ O");

  printf("\n\nVAMOS COMEÇAR SUA BATALHA\n\n"); 
}

void Imprime(int jogadaM[3][3]){
printf("\n%c | %c | %c\n---------\n%c | %c | %c\n---------\n%c | %c | %c\n\n", jogadaM[0][0], jogadaM[0][1], jogadaM[0][2], jogadaM[1][0], jogadaM[1][1], jogadaM[1][2], jogadaM[2][0], jogadaM[2][1], jogadaM[2][2]);}

int Ganhou(int m[3][3]){
  for(int i = 0; i <3; i++){
    if((m[i][0] == m[i][1]) && (m[i][0] == m[i][2])){
      if((m[i][0] != 47) && (m[i][1] != 47) && (m[i][2] = 47)){
        return 1;
      } 
    }
  }
  for(int i = 0; i <3; i++){
    if((m[0][i] == m[1][i]) && (m[0][i] == m[2][i])){
      if((m[0][i] != 47) && (m[1][i] != 47) && (m[2][i] =847)){
        return 1;
      } 
    }
  if((m[0][0] == m[1][1]) && (m[1][1] == m[2][2])){
    if(m[0][0] != 47){
      return 1;
    }
  }
  if((m[0][2] == m[1][1]) && (m[1][1] == m[2][0])){
    if(m[0][2] != 47){
      return 1;
    }
  }
  
  
  }return 0;
}


 int main(void) {

  int jogada, jogadaM[3][3], Valid = 0, jogador = 1, cont = 1, exemplo, l, c;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){jogadaM[i][j] = 47; }
  }

  printinicial();

  while(!Valid){
    
    printf("JOGARDOR [%d] DESEJA JOGAR AONDE?\n\n-->", jogador);
    scanf("%d", &jogada);
      
      switch(jogada){
        
        case 7:
        l = 0; c = 0;
        if(jogadaM[0][0] == 47){
        jogadaM[0][0] = (jogador == 1) ? 88 : 48;
        Imprime(jogadaM);}
        else{printf("\n\nJa Foi Realizado Uma Jogada Nesta Opção Escolha Outra!\n Deseja Ver O Exemplo Novamente?\n\n[1] - SIM\n[2] - NÃO\n\n-->");
        scanf("%d", &exemplo); (exemplo == 1) ? printf("\n7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3\n\n") : 0 ;jogador = (jogador == 1) ? 2 : 1 ; cont--;}
          
        break;
    
        case 8:
        l = 0; c = 1;
        if(jogadaM[0][1] == 47){
        jogadaM[0][1] = (jogador == 1) ? 88 : 48;
        Imprime(jogadaM);}
        else{printf("\n\nJa Foi Realizado Uma Jogada Nesta Opção Escolha Outra!\n Deseja Ver O Exemplo Novamente?\n\n[1] - SIM\n[2] - NÃO\n\n-->");
        scanf("%d", &exemplo); (exemplo == 1) ? printf("\n7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3\n\n") : 0 ;jogador = (jogador == 1) ? 2 : 1; cont--;}
          
        break;
        
        case 9:
        l = 0; c = 2;
        if(jogadaM[0][2] == 47){
        jogadaM[0][2] = (jogador == 1) ? 88 : 48;
        Imprime(jogadaM);}
        else{printf("\n\nJa Foi Realizado Uma Jogada Nesta Opção Escolha Outra!\n Deseja Ver O Exemplo Novamente?\n\n[1] - SIM\n[2] - NÃO\n\n-->");
        scanf("%d", &exemplo); (exemplo == 1) ? printf("\n7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3\n\n") : 0 ;jogador = (jogador == 1) ? 2 : 1; cont--;}
          
        break;
        
        case 4:
        l = 1; c = 0;
        if(jogadaM[1][0] == 47){
        jogadaM[1][0] = (jogador == 1) ? 88 : 48;
        Imprime(jogadaM);}
        else{printf("\n\nJa Foi Realizado Uma Jogada Nesta Opção Escolha Outra!\n Deseja Ver O Exemplo Novamente?\n\n[1] - SIM\n[2] - NÃO\n\n-->");
        scanf("%d", &exemplo); (exemplo == 1) ? printf("\n7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3\n\n") : 0 ;jogador = (jogador == 1) ? 2 : 1; cont--;}
          
        break;
        
        case 5:
        l = 1; c = 1;
        if(jogadaM[1][1] == 47){
        jogadaM[1][1] = (jogador == 1) ? 88 : 48;
        Imprime(jogadaM);}
        else{printf("\n\nJa Foi Realizado Uma Jogada Nesta Opção Escolha Outra!\n Deseja Ver O Exemplo Novamente?\n\n[1] - SIM\n[2] - NÃO\n\n-->");
        scanf("%d", &exemplo); (exemplo == 1) ? printf("\n7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3\n\n") : 0 ;jogador = (jogador == 1) ? 2 : 1; cont--;}
          
        break;
        
        case 6:
        l = 1; c = 2;
        if(jogadaM[1][2] == 47){
        jogadaM[1][2] = (jogador == 1) ? 88 : 48;
        Imprime(jogadaM);}
        else{printf("\n\nJa Foi Realizado Uma Jogada Nesta Opção Escolha Outra!\n Deseja Ver O Exemplo Novamente?\n\n[1] - SIM\n[2] - NÃO\n\n-->");
        scanf("%d", &exemplo); (exemplo == 1) ? printf("\n7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3\n\n") : 0 ;jogador = (jogador == 1) ? 2 : 1; cont--;}
          
        break;
        
        case 1:
        l = 2; c = 0;
        if(jogadaM[2][0] == 47){
        jogadaM[2][0] = (jogador == 1) ? 88 : 48;
        Imprime(jogadaM);}
        else{printf("\n\nJa Foi Realizado Uma Jogada Nesta Opção Escolha Outra!\n Deseja Ver O Exemplo Novamente?\n\n[1] - SIM\n[2] - NÃO\n\n-->");
        scanf("%d", &exemplo); (exemplo == 1) ? printf("\n7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3\n\n") : 0 ;jogador = (jogador == 1) ? 2 : 1; cont--;}
          
        break;
        
        case 2:
        l = 2; c = 1;
        if(jogadaM[2][1] == 47){
        jogadaM[2][1] = (jogador == 1) ? 88 : 48;
        Imprime(jogadaM);}
        else{printf("\n\nJa Foi Realizado Uma Jogada Nesta Opção Escolha Outra!\n Deseja Ver O Exemplo Novamente?\n\n[1] - SIM\n[2] - NÃO\n\n-->");
        scanf("%d", &exemplo); (exemplo == 1) ? printf("\n7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3\n\n") : 0 ;jogador = (jogador == 1) ? 2 : 1; cont--;}
          
        break;
        
        case 3:
        l = 2; c = 2;
        if(jogadaM[2][2] == 47){
        jogadaM[2][2] = (jogador == 1) ? 88 : 48;
        Imprime(jogadaM);}
        else{printf("\n\nJa Foi Realizado Uma Jogada Nesta Opção Escolha Outra!\n Deseja Ver O Exemplo Novamente?\n\n[1] - SIM\n[2] - NÃO\n\n-->");
        scanf("%d", &exemplo);
          (exemplo == 1) ? printf("\n7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3\n\n") : 0 ;jogador = (jogador == 1) ? 2 : 1;cont--;}      
        break;
        
        default:
        printf("\nJogada Invalida! DesejaVer O Exemplo Novamente?\n\n[1] -  SIM\n[2] - NÃO\n\n-->");
        scanf("%d", &exemplo);
        (exemplo == 1) ? printf("\n7 | 8 | 9\n---------\n4 | 5 | 6\n---------\n1 | 2 | 3\n\n") : 0 ;
        jogador = (jogador == 1) ? 2 : 1;
        cont--;
        break;
        
      }
    if(cont >= 5){Valid = Ganhou(jogadaM);}
    
    jogador = (jogador == 1) ? 2 : 1;
    cont++;
    if(cont == 10){break;}
    printf("\n");
    
  }
  
  return 0;
}
