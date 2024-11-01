#include <stdio.h>

    struct aluno_ia24{

        char nome[20];
        char genero[20];
        int idade;
        char email[50];
        int matricula;

    };

    void preenche(){

    struct aluno_ia24 novo;

    printf("\nDiga o nome do(a) aluno: \n");
    scanf("%s", novo.nome);

    printf("Diga o genero do(a) %s: \n", novo.nome);
    scanf("%s", novo.genero);

    printf("Digite a idade do(a) %s: \n", novo.nome);
    scanf("%d", &novo.idade);

    printf("Digite o email do(a) %s: \n", novo.nome);
    scanf("%s", novo.email);

    printf("Digite a matricula do(a) %s: \n", novo.nome);
    scanf("%d", &novo.matricula);

    printf("O(a) aluno(a) %s eh %s, seu email eh %s, sua matricula eh %d e ele(a) tem %d anos de idade\n", novo.nome, novo.genero, novo.email, novo.matricula, novo.idade);

    }

    int main(void){

        preenche();

}