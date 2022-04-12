#ifndef ALUNO_H_
#define ALUNO_H_

typedef struct aluno Aluno;

Aluno* InicAluno (int mat, char* nome, float cr);

int RetornaMatricula (Aluno* aluno);
char* RetornaNomeAluno (Aluno* aluno);
float RetornaCR (Aluno* aluno);

void ImprimeAluno(Aluno* aluno);
void DestroiAluno (Aluno* aluno);

#endif