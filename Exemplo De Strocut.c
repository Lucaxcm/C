#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {

  char nome[2][50];

}Alunos;

typedef struct {

  Alunos RA;
  char matricula[2][50];
  int nota[3];

}Infos;

int main(void) {
  
  Infos Estudante;
  
  for(int i = 0; i<2; i++){
    printf("\nDigite o nome do aluno: ");
    scanf("%s", Estudante.RA.nome[i]);
    printf("\nDigite a matricula do aluno: ");
    scanf("%s", Estudante.matricula[i]);
    printf("\nDigite a nota do aluno: ");
    scanf("%i", &Estudante.nota[i]);

  }
  
  for(int i = 0; i<2; i++){
    printf("\nNome: %s\n", Estudante.RA.nome[i]);
    printf("Matricula: %s\n", Estudante.matricula[i]);
    printf("Nota: %i", Estudante.nota[i]);
  }
  
  return 0;
}
