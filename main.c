#include <stdio.h>
#include "professor.h"
#include "aluno.h"
#include "ListaHet.h"

int main(void) {
  
  //criacao de alunos para teste

  Aluno* aline = InicAluno(123, "Aline", 10);
  Aluno* igor = InicAluno (999, "Igor", 8);
  Aluno* gabi = InicAluno (567, "Gabi", 9);

  //criacao de professores para teste
  Professor* vitor = InicProfessor (12345, "Vitor", 9435.00);
  Professor* rosane = InicProfessor (67890, "Rosane", 7432.00);

  //inicializando a lista
  ListaHet* churrasco = InicLista();

  //inserindo os participantes do churrasco na lista
  InsereAluno(churrasco, aline);
  InsereProfessor(churrasco, vitor);
  InsereAluno(churrasco, igor);
  InsereProfessor(churrasco, rosane);
  InsereAluno(churrasco, gabi);

  printf ("Imprimindo a lista:\n");
  ImprimeListaHet(churrasco);

  //conferindo o dinheiro obtido para fazer o churrasco
  printf("VALOR: %.2f ", ValorChurrasco(churrasco));

  //liberando memoria da lista
  DestroiLista(churrasco);

  //liberando memoria dos alunos
  DestroiAluno(aline);
  DestroiAluno(igor);
  DestroiAluno(gabi);

  //liberando memoria dos professores
  DestroiProfessor(vitor);
  DestroiProfessor(rosane);
  return 0;
}