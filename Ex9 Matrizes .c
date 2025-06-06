#include <stdio.h>

#define NL 5   // número de alunos
#define NCOL 10 // número de questões

void preencheGabarito(char gabarito[NCOL]);
void criaRespostas(char respostas[NL][NCOL]);
void compara(char gabarito[NCOL], char respostas[NL][NCOL], int nl, int nc, int pontua[NL]);
void imprimeRespostas(char respostas[NL][NCOL]);
void imprimePontuacoes(int pontua[NL]);

int main() {
    char gabarito[NCOL];
    char respostas[NL][NCOL];
    int pontua[NL];

    preencheGabarito(gabarito);
    criaRespostas(respostas);
    compara(gabarito, respostas, NL, NCOL, pontua);

    printf("Gabarito:\n");
    for (int i = 0; i < NCOL; i++) {
        printf("%c ", gabarito[i]);
    }
    printf("\n\nRespostas dos alunos:\n");
    imprimeRespostas(respostas);

    printf("\nPontuação dos alunos:\n");
    imprimePontuacoes(pontua);

    return 0;
}

void preencheGabarito(char gabarito[NCOL]) {
    char opcoes[4] = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < NCOL; i++) {
        gabarito[i] = opcoes[i % 4];  // preenchimento cíclico
    }
}

void criaRespostas(char respostas[NL][NCOL]) {
    char opcoes[4] = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < NL; i++) {
        for (int j = 0; j < NCOL; j++) {
            respostas[i][j] = opcoes[(i + j) % 4];  // preenchimento cíclico
        }
    }
}

void compara(char gabarito[NCOL], char respostas[NL][NCOL], int nl, int nc, int pontua[NL]) {
    for (int i = 0; i < nl; i++) {
        pontua[i] = 0;
        for (int j = 0; j < nc; j++) {
            if (respostas[i][j] == gabarito[j]) {
                pontua[i]++;
            }
        }
    }
}

void imprimeRespostas(char respostas[NL][NCOL]) {
    for (int i = 0; i < NL; i++) {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < NCOL; j++) {
            printf("%c ", respostas[i][j]);
        }
        printf("\n");
    }
}

void imprimePontuacoes(int pontua[NL]) {
    for (int i = 0; i < NL; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, pontua[i]);
    }
}
