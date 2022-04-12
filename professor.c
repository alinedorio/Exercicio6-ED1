#include "professor.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct professor{
  int siape; //matricula do professor
  char* nome;
  float salario;
};

Professor* InicProfessor (int siape, char* nome, float salario){
  Professor* novo = (Professor*)malloc (sizeof(Professor));

  novo->nome = strdup (nome);
  novo->siape = siape;
  novo->salario = salario;

  return novo;
}

int RetornaSiape (Professor* prof){
  return prof->siape;
}

char* RetornaNomeProf (Professor* prof){
  return prof->nome;
}

float RetornaSalario (Professor* prof){
  return prof->salario;
}

void ImprimeProfessor(Professor* prof){
  printf("Siape: %d, Nome: %s, Salario: %.2f\n", prof->siape, prof->nome, prof->salario);
}

void DestroiProfessor (Professor* prof){
  free (prof->nome);
  free(prof);
}


