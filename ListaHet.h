#ifndef LISTAHET_H_
#define LISTAHET_H_

#include <stdio.h>
#include "aluno.h"
#include "professor.h"

//lista com sentinela
typedef struct listahet ListaHet;

ListaHet* InicLista(void);

void InsereAluno (ListaHet* lista, Aluno* al);
void InsereProfessor (ListaHet* lista, Professor* prof);
void ImprimeListaHet (ListaHet* lista);

float ValorChurrasco (ListaHet* lista);
void DestroiLista (ListaHet* lista);

#endif