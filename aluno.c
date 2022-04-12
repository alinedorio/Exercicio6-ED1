#include "aluno.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno{
  int mat;
  char* nome;
  float cr;
};

Aluno* InicAluno (int mat, char* nome, float cr){
  Aluno* novo = (Aluno*)malloc (sizeof(Aluno));

  novo->nome = strdup (nome);
  novo->mat = mat;
  novo->cr = cr;

  return novo;
}

int RetornaMatricula (Aluno* aluno){
  return aluno->mat;
}

char* RetornaNomeAluno (Aluno* aluno){
  return aluno->nome;
}

float RetornaCR (Aluno* aluno){
  return aluno->cr;
}

void ImprimeAluno(Aluno* aluno){
  printf("Matricula: %d, Nome: %s, CR: %.2f\n", aluno->mat, aluno->nome, aluno->cr);
}

void DestroiAluno (Aluno* aluno){
  free (aluno->nome);
  free(aluno);
}