/*– Codifique, compile e execute um programa em C que crie uma estrutura representando os alunos do 
curso de Programação. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da 
segunda prova e nota da terceira prova. O programa deve executar as seguintes ações: 
a- permitir ao usuário entrar com os dados de 5 alunos 
b- encontrar o aluno com maior nota da primeira prova 
c- encontrar o aluno com maior média geral 
d- encontrar o aluno com menor média geral e- para cada aluno armazenado na estrutura diga se ele foi 
aprovado ou reprovado, considerando o valor 7 para aprovação. */

 #include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float notaProva1;
    float notaProva2;
    float notaProva3;
    float mediaGeral;
};

int main() {
    struct Aluno alunos[5];
    int i;
    int alunoMaiorNotaProva1 = 0;
    int alunoMaiorMediaGeral = 0;
    int alunoMenorMediaGeral = 0;

    // Entrada de dados dos alunos
    for (i = 0; i < 5; i++) {
        printf("Entre com os dados do aluno %d:\n", i+1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].notaProva1);

        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].notaProva2);

        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].notaProva3);

        alunos[i].mediaGeral = (alunos[i].notaProva1 + alunos[i].notaProva2 + alunos[i].notaProva3) / 3;

        printf("\n");
    }

    for (i = 1; i < 5; i++) {
        if (alunos[i].notaProva1 > alunos[alunoMaiorNotaProva1].notaProva1) {
            alunoMaiorNotaProva1 = i;
        }
    }

    for (i = 1; i < 5; i++) {
        if (alunos[i].mediaGeral > alunos[alunoMaiorMediaGeral].mediaGeral) {
            alunoMaiorMediaGeral = i;
        }
    }

    for (i = 1; i < 5; i++) {
        if (alunos[i].mediaGeral < alunos[alunoMenorMediaGeral].mediaGeral) {
            alunoMenorMediaGeral = i;
        }
    }

    printf("\nSituação dos alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Média Geral: %.2f\n", alunos[i].mediaGeral);

        if (alunos[i].mediaGeral >= 7) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }

        printf("\n");
    }

    printf("Aluno com maior nota na primeira prova:\n");
    printf("Nome: %s\n", alunos[alunoMaiorNotaProva1].nome);
    printf("Matrícula: %d\n",
