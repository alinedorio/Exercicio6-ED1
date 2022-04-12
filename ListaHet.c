#include "ListaHet.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PROF 0
#define ALU 1

typedef struct cel Celula;

struct cel{
  Celula* prox;
  void* item;
  int tipo;
};

//sentinela
struct listahet{
  Celula* Prim;
  Celula* Ult;
};

ListaHet* InicLista(void){
  ListaHet* lista = (ListaHet*)malloc(sizeof(ListaHet));
  lista->Prim = NULL;
  lista->Ult = NULL;

  return lista;
}

void InsereAluno (ListaHet* lista, Aluno* al){
  Celula* nova = (Celula*) malloc (sizeof(Celula));

  nova->item = al;
  nova->tipo = ALU;
  nova->prox = lista->Prim;
  lista->Prim = nova;

  if (lista->Ult == NULL){
    lista->Ult = nova;
  }
}

void InsereProfessor (ListaHet* lista, Professor* prof){
  Celula* nova = (Celula*) malloc (sizeof(Celula));

  nova->item = prof;
  nova->tipo = PROF;
  nova->prox = lista->Prim;
  lista->Prim = nova;

  if (lista->Ult == NULL){
    lista->Ult = nova;
  }  
}

void ImprimeListaHet (ListaHet* lista){
  Celula* p;

  for (p = lista->Prim; p != NULL; p = p->prox){
    //se for aluno, imprime aluno
    if (p->tipo == ALU){
      printf("ALUNO: ");
      ImprimeAluno(p->item);
    }

    if (p->tipo == PROF){
      printf("PROFESSOR: ");
      ImprimeProfessor(p->item);
    }
  }
}

//valor do churrasco: Professor contribui com 2% do salario
//Aluno contribui com taxa fixa de 30 reais
float ValorChurrasco (ListaHet* lista){
  Celula* p = lista->Prim;
  float valor = 0.0;

  while(p != NULL){
    if(p->tipo == PROF){
      valor = valor + (0.02 * RetornaSalario(p->item));
    }

    if (p->tipo == ALU){
      valor = valor + 30.0;
    }

    p = p->prox;
  }

  return valor;
}

void DestroiLista (ListaHet* lista){
  Celula* p = lista->Prim;
  Celula* t;

  while(p != NULL){
    t = p->prox;
    free(p);
    p = t;
  }

  free(lista);
}