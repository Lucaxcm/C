// BIBLIOTECAS UTILIZADAS //

#include <stdio.h>
#include <locale.h>

//-------------------------------------------------------------------//

int menu() { 

int ValorRetorno, Validacao = 0;

printf("Opa\U0001F643! Escolha a Opção desejada:\n\n");
printf("[1] Vazão de um rio para um determinado mês\n");
printf("[2] Alterar A Vazão De Um Rio\n");
printf("[3] Vazão Média De Um Rio Para Um Período\n");
printf("[4] Mês De Um Rio Com Maior Vazão\n");
printf("[5] Mês De Um Rio Com Menor Vazão\n");
printf("[6] Rio Com Maior Vazão Média\n");
printf("[7] Rios Com Vazões Maiores Do Que o Indicado\n");
printf("[8] Realiza Uma Diferença Entre Os Rios\n");
printf("[9] Compara Maiores Vazoes Atuais Com Maiores Do Ano Passado\n");
printf("\n\U000027A1 ");

while (!Validacao) {

  scanf("%d", &ValorRetorno);

  if (ValorRetorno >= 1 && ValorRetorno <= 9)
    {Validacao = 1;}
  else {printf("\nValor Inválido\U0001F974! Tente Novamente\U0001F635!\n\n\U000027A1 ");}}

return ValorRetorno;} // MENU RETORNA O QUE ELE DESEJA FAZER

//-------------------------------------------------------------------//

int EscolhaRio(char Rios[][25]){ 

int i, ValorDeRetorno, Validacao = 0;
  
printf("\n\U0001F3C4Rios Disponiveis\U0001F3C4\n\n");
  
for (i = 0; i < 10; i++){printf("[%d]...%s\n", i + 1, Rios[i]);}
printf("\nDigite O Número Do Rio \U0001F30A Desejado: ");

while(!Validacao){
  
  scanf("%d", &ValorDeRetorno);
  
  if(ValorDeRetorno >= 1 && ValorDeRetorno <= 10) 
    {Validacao = 1;}
  else
    {printf("\n\nValor Inválido\U0001F974! Tente Novamente\U0001F635!\n\n\U000027A1 ");}}

return ValorDeRetorno;}

//-------------------------------------------------------------------//

int Datas(char DatasMes[][25]){ 

int i, ValorDeRetorno, Ano, Validacao = 0;

    printf("\n\U0001F4C5 Digite o Ano Desejado (2020 - 2021): ");
  
    while(!Validacao){
      
    scanf("%d", &Ano);
      
    if ((Ano == 2020) || (Ano == 2021)) 
      {Ano = Ano%2; Validacao = 1;}
    else 
    {printf("\nValor Inválido\U0001F974! Tente Novamente\U0001F635!\n\n\U000027A1 ");}}


    if(Ano == 0){
      
      printf("\n");
      
      for (i = 0; i < 12; i++){printf("[%d]...%s\n", i + 1, DatasMes[i]);}
      
      printf("\nDigite O Número Da Data \U0001F4C5: ");
      Validacao = 0;
      
      while (!Validacao){
        scanf("%d", &ValorDeRetorno);
        
        if (ValorDeRetorno >= 1 && ValorDeRetorno <= 12) 
        {return ValorDeRetorno;}
        else 
        {printf("\n\nValor Inválido\U0001F974! Tente Novamente\U0001F635!\n\n\U000027A1");}}}

    if(Ano == 1){ 
      
      for (i = 12; i < 24; i++){printf("[%d]...%s\n", i - 11, DatasMes[i]);}
      
      printf("\n\nDigite O Número Da Data \U0001F4C5: ");
      Validacao = 0;
      
      while (!Validacao){
        
        scanf("%d", &ValorDeRetorno);
      
        if (ValorDeRetorno >= 1 && ValorDeRetorno <= 12) 
        {return ValorDeRetorno + 12;}
        else
        {printf("\n\nValor Inválido\U0001F974! Tente Novamente\U0001F635!\n\n\U000027A1");}}}}

//-------------------------------------------------------------------//

float AlteraVazao(float Valores[15][30], float ValorAntigo){ 

float ValorNovo; 
int Validacao = 0, i;



while(!Validacao){ // INICIO WHILE

  printf("\n\U0001F4C4 Para Qual Valor Deseja Alterar?\n\n\U000027A1 "); 
  scanf("%f", &ValorNovo); 
  printf("\nDeseja Alterar o valor de %.2f Para %.2f?\n\n [1] - Confirmar\n [2] - DigitarNovamente\n\n\U000027A1", ValorAntigo, ValorNovo);     
  scanf("%d", &i);

if((i == 1) || (i == 2))
  {if(i == 1){return ValorNovo;}}
  
else{if(i != 2){printf("\nValor Inválido\U0001F974! Tente Novamente\U0001F635!\n\n");}}}}

//-------------------------------------------------------------------//

float Media(int Rio, int Data, int Data2, float Valores[15][30]){
float aux = 0, ValorDeRetorno;
int i;

for(i=Data;i<=Data2;i++){aux = aux + Valores[Rio][i];}
return (aux = aux / (Data2 - Data + 1));}

//-------------------------------------------------------------------//

float MaiorValor(float Valores[15][30], int Rio, char Rios[][25], char DatasMes[][25]) {

int i, j;
float maior;

  for (i = 1; i <= 24; i++) {
    if (i == 1) {
        maior = Valores[Rio][i];
    }
    if (Valores[Rio][i] > maior) {
        maior = Valores[Rio][i];
        j = i - 1;
    }
  }

  printf("\nA Maior Vazão Do %s é No Mês %s No Valor De: %.2f\n", Rios[Rio-1],DatasMes[j], maior);


return maior;}

//-------------------------------------------------------------------//

float MenorValor(float Valores[15][30], int Rio, char Rios[][25], char DatasMes[][25]) {

int i, j = 0;
float menor;

  for (i = 1; i <= 24; i++) {
    if (i == 1) {
        menor = Valores[Rio][i];
    }
    if (Valores[Rio][i] < menor) {
        menor = Valores[Rio][i]; 
        j = i - 1;
    }
  }

printf("\nA Menor Vazão Do %s é No Mês %s No Valor De: %.2f\n", Rios[Rio-1],DatasMes[j], menor);


return menor;}

//-------------------------------------------------------------------//


float MaiorMedia(float Valores[15][30], char Rios[][25]) {
    int Rio = 1, Data = 1, Data2 = 24, i = 0;
    float Rio1, Rio2;

    Rio2 = Media(Rio, Data, Data2, Valores);

    while (Rio <= 10) {
        Rio1 = Media(Rio, Data, Data2, Valores);
        if (Rio1 > Rio2) {
            Rio2 = Rio1;
            i = Rio - 1;
        }
        Rio++;
    }
    printf("\nO Rio Com Maior Vazão Média é o %s", Rios[i]);

    return Rio2;
}

//-------------------------------------------------------------------//

int ExibirVazaoAcimaDe(float Valores[15][30], char Rios[][25], char DatasMes[][25]) {
      int i, j, contador = 0, b;
      float valor;
      printf("\nDigite O Valor De Vazão Desejado \U0001F4C2: ");
      scanf("%f", &valor);
    
      printf("\n\u27A1 Rios e meses com vazão acima de %.2f \u2B05\n\n", valor);
      for (i = 1; i < 10; i++) {  // Percorre os rios, começando de 1 para ignorar a primeira linha
          for (j = 1; j < 25; j++) {  // Percorre os meses
              if (Valores[i][j] > valor) {
                  printf("Rio: %s, Mês: %s, Vazão: %.2f\n", Rios[i - 1], DatasMes[j - 1], Valores[i][j]);
                  contador++;
              }
          }
      }
      return contador;
  }

//-------------------------------------------------------------------//

 float SubtraiRios(float Valores[15][30], char Rios[][25], char DatasMes[][25]){
   float Diferenca;
   int Rio1, Rio2, Data1, Data2;
   printf("\nQual O Primeiro Rio\n");
   Rio1 = EscolhaRio(Rios);
   Data1 = Datas(DatasMes);
   printf("\nQual o Segundo Rio\n");
   Rio2 = EscolhaRio(Rios);
   Data2 = Datas(DatasMes);
    
   Diferenca = Valores[Rio1][Data1] - Valores[Rio2][Data2];
   printf("\nVazão Do %s no Mês %s: %.2f\n", Rios[Rio1-1], DatasMes[Data1], Valores[Rio1][Data1]);
   printf("Vazão Do %s no Mês %s: %.2f\n", Rios[Rio2-1], DatasMes[Data2], Valores[Rio2][Data2]);
   printf("\n\nA Diferença Entre os Rios é De: %.2f\n", Diferenca);

   return 0;
 }

//-------------------------------------------------------------------//

float Comp(float Valores[15][30], char Rios[][25], char DatasMes[][25]){
  int Data = 1, Data2 = 12, i = 0, k = 1, Data3 = 13, Data4 = 24;
  float Rio1, Rio2;
  
  for(k=1; k<10; k++){

  Rio1 = Media(k, Data, Data2, Valores);
  Rio2 = Media(k, Data3, Data4, Valores);

printf("\n\U0001F4A7 %s \U0001F4A7\n", Rios[k]);
    
  if(Rio1>Rio2){
    printf("[Analizando os Dados Percebemos Um Aumento De Vazão Média Em Relação ao Ano de 2020]\n");
    printf("- Tivemos um Aumento De %.2f\n", Rio1 - Rio2);}
  else{printf("Analizando os Dados Percebemos Uma Diminuição na Vazão Média Em Relação ao Ano de 2020\n");
    printf("- Tivemos um Uma Baixa De %.2f\n", Rio2 - Rio1);}

}
return 0;}

//-------------------------------------------------------------------//

int main(void) {

  float Valores[15][30] = {{ 0,    0,    1,    2,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,  22,  23},
  {0, 1.80, 2.29, 2.40, 2.55, 2.56, 2.51, 2.38, 2.17, 2.01, 2.12, 1.69, 1.50, 1.40, 1.52, 2.44, 2.00, 2.36, 1.90, 2.15, 2.13, 1.73, 1.72, 2.07, 2.12},
  {1, 1.84, 2.89, 1.80, 0.92, 0.61, 1.55, 1.13, 2.45, 1.25, 1.69, 2.91, 4.48, 4.12, 3.07, 5.46, 1.88, 1.90, 2.14, 1.46, 2.08, 1.84, 5.22, 5.42, 2.70},
  {2, 1.00, 2.99, 0.84, 0.51, 0.48, 1.43, 1.00, 5.21, 0.80, 0.90, 2.36, 3.73, 6.92, 4.94, 10.01, 1.05, 1.74, 2.62, 0.77, 2.84, 1.11, 7.12, 5.09, 1.29},
  {3, 1.59, 1.43, 2.03, 0.91, 1.09, 1.26, 0.90, 1.48, 1.03, 1.70, 1.06, 0.78, 1.59, 0.90, 0.74, 1.02, 1.35, 2.37, 1.09, 1.64, 2.04, 2.26, 2.43, 2.40},
  {4, 3.09, 4.21, 1.94, 0.83, 1.17, 5.22, 3.64, 9.35, 3.54, 4.48, 5.73, 13.09, 10.98, 7.59, 19.38, 6.13, 5.70, 6.76, 4.60, 4.24, 3.83, 9.59, 11.02, 6.47},
  {5, 4.67, 3.22, 1.06, 0.80, 1.71, 8.36, 3.97, 18.02, 3.14, 2.61, 2.08, 15.76, 23.80, 8.81, 7.19, 1.98, 1.16, 3.16, 2.41, 4.60, 2.58, 18.04, 3.89, 1.14},
  {6, 2.97, 2.40, 1.00, 0.93, 1.58, 5.15, 3.01, 11.66, 2.20, 2.70, 1.02, 7.18, 17.79, 6.03, 3.40, 1.40, 1.08, 2.93, 1.79, 5.58, 2.43, 16.60, 5.87, 1.06},
  {7, 3.10, 6.08, 3.84, 1.83, 5.11, 17.84, 13.31, 10.99, 5.09, 2.55, 1.42, 2.75, 15.83, 18.17, 4.98, 2.23, 1.53, 2.26, 2.30, 1.89, 6.02, 19.75, 11.45, 3.71},
  {8, 1.99, 4.52, 1.15, 1.46, 5.14, 9.77, 7.55, 6.73, 1.06, 0.81, 0.64, 3.10, 10.22, 5.69, 2.70, 0.74, 0.74, 2.58, 1.49, 0.97, 4.01, 11.59, 2.56, 0.74},
  {9, 0.33, 0.33, 0.27, 0.25, 0.21, 0.24, 0.23, 0.36, 0.25, 0.27, 0.34, 0.48, 0.47, 0.45, 0.52, 0.32, 0.35, 0.37, 0.32, 0.42, 0.32, 0.44, 0.34, 0.28}};
  char  Rios[][25] =   {"Rio Piraquara",   "Rio Pequeno",   "Rio Miringuava", "Rio Passaúna", "Rio da Várzea", 
  "Rio Bananas", "Rio das Pedras",  "Rio Vitorino",  "Rio Marmeleiro", "Rio Cachoeirinha"};      // RIOS EM SEQUENCIA
  char  DatasMes[][25] =   { "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", 
"Outubro", "Novembro", "Dezembro", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};  // MESES E SEU ANO

  int Opcao, Rio, Data, Data2, Sair = 0, Ocorrencias = 0, Rio2;
  float NovaVazao, MediaFinal, Maior, Menor, MaiorMedia2, Diferenca;


while(!Sair){
  
  Opcao = menu();

  switch (Opcao){
    
    case 1:
      
        Rio = EscolhaRio(Rios);
        Data = Datas(DatasMes);
        printf("\n\U0001F4E6 Aqui Está A Opção Desejada \U0001F4E6\n");
        printf("\nVazão do %s em %s: %.2f\n", Rios[Rio-1], DatasMes[Data-1], Valores[Rio][Data]);
        break;
    
    case 2:
      
      printf("\n\n\U0001F4A7Alterar A Vazão\U0001F4A7\n\n");
      float ValorAntigo = 0;
      Rio = EscolhaRio(Rios);
      Data = Datas(DatasMes);
      printf("\nO Valor Que Deseja Alterar É: %.2f\n", Valores[Rio][Data]);
      ValorAntigo = Valores[Rio][Data];
      Valores[Rio][Data] = AlteraVazao(Valores, ValorAntigo);
      break;
    
    case 3:
      
      Rio = EscolhaRio(Rios);
      printf("\nQual A Data Inicial?\n");
      Data = Datas(DatasMes);
      printf("\nQual A Data Final?\n");
      Data2 = Datas(DatasMes);
      while(Data>Data2){
        printf("\n\u23E9 O Mês Final Não Pode Ser Menor Que O Inicial \u23EA\n");
        printf("\nDigite As Datas Novamente!!\n");
        printf("\nQual A Data Inicial?\n");
        Data = Datas(DatasMes);
        printf("\nQual A Data Final?\n");
        Data2 = Datas(DatasMes);


      }
      MediaFinal = Media(Rio, Data, Data2, Valores);
      printf("\nA Média Do %s Para o Período Escolhido é: %.2f\n", Rios[Rio-1], MediaFinal);
      break;
    
    case 4:
        Rio = EscolhaRio(Rios);
        Maior = MaiorValor(Valores, Rio, Rios, DatasMes);
        break;
    case 5:
        Rio = EscolhaRio(Rios);
        Menor = MenorValor(Valores, Rio, Rios, DatasMes);
        break;
    case 6:
        MaiorMedia2 = MaiorMedia(Valores, Rios);
        printf(" Sua Média é %.2f\n", MaiorMedia2);
        break;
    case 7: 
      Ocorrencias = ExibirVazaoAcimaDe(Valores, Rios, DatasMes);
      printf("\nTotal de ocorrências: %d\n", Ocorrencias);
      break;
    case 8: 
      printf("\n\U0001F4A7Subtrair Rios\U0001F4A7\n\n");
      SubtraiRios(Valores, Rios, DatasMes);
      break;

    case 9: 
      printf("\n\U0001F4A7Comparação Dos Maiores Durante Anos\U0001F4A7\n");
      Comp(Valores, Rios, DatasMes);
      break;
}
  
printf("\n\u26A0 Deseja Continuar\u26A0 \n\n[1] - Sim [\U0001F60D] \n[2] - Não [\U0001F620]\n\n-->");
scanf("%d", &Sair); 

while((Sair != 1) && (Sair != 2)){
  
  printf("\nValor Inválido\U0001F974! Tente Novamente\U0001F635!\n\n\U000027A1 "); 
  scanf("%d", &Sair); 
  if((Sair == 1) || (Sair == 2)){break;}}

if((Sair == 1) || (Sair == 2)){
  if(Sair == 1){Sair = 0;}
    else{Sair = 1;}}
  
printf("\n");
  
}}