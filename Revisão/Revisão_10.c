#include <stdio.h>

struct Aluno {
    int matricula;
    float np1, np2, np3;
    char nome[100];
    char disciplina[100];
};

int main(){
    int n, i;

    printf("Numero de alunos? ");
    scanf("%d", &n);

    struct Aluno alunos[n];

    for (i=0; i<n;i++){
        printf("\nAluno %d:\n", i + 1);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome);

        printf("Disciplina: ");
        scanf(" %[^\n]s", alunos[i].disciplina);

        printf("Nota NP1: ");
        scanf("%f", &alunos[i].np1);

        printf("Nota NP2: ");
        scanf("%f", &alunos[i].np2);

        printf("Nota NP3: ");
        scanf("%f", &alunos[i].np3);
    }
    return 0;
}
