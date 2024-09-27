#include <stdio.h>

int main() {
    struct Aluno {
        char nome[50];
        int idade;
        float nota;
    };

    struct Aluno a1 = {"joao", 18, 10.0};
    struct Aluno a2 = {"maria", 10, 5.5};
    struct Aluno a3 = {"renata", 18, 7.0};

    printf("O nome do aluno eh %s\n Sua idade eh %d\n Sua nota eh %.2f\n\n",
           a1.nome, a1.idade, a1.nota);

    printf("O nome do aluno eh %s\n Sua idade eh %d\n Sua nota eh %.2f\n\n",
           a2.nome, a2.idade, a2.nota);

    printf("O nome do aluno eh %s\n Sua idade eh %d\n Sua nota eh %.2f\n\n",
           a3.nome, a3.idade, a3.nota);
}