#ifndef PROFESSOR_H_
#define PROFESSOR_H_

typedef struct professor Professor;

Professor* InicProfessor (int siape, char* nome, float salario);

int RetornaSiape (Professor* prof);
char* RetornaNomeProf (Professor* prof);
float RetornaSalario (Professor* prof);

void ImprimeProfessor(Professor* prof);
void DestroiProfessor (Professor* prof);

#endif