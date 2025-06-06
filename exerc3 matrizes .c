#include <stdio.h>

#define TAM 3  // Tamanho da matriz quadrada

int ehQuadradoMagico(int m[TAM][TAM]);
void leMatriz(int m[TAM][TAM]);
void imprimeMatriz(int m[TAM][TAM]);

int main() {
    int matriz[TAM][TAM];

    printf("Digite os elementos da matriz %dx%d:\n", TAM, TAM);
    leMatriz(matriz);

    printf("Matriz digitada:\n");
    imprimeMatriz(matriz);

    if (ehQuadradoMagico(matriz)) {
        printf("É um quadrado mágico!\n");
    } else {
        printf("Não é um quadrado mágico.\n");
    }

    return 0;
}

void leMatriz(int m[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

void imprimeMatriz(int m[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int ehQuadradoMagico(int m[TAM][TAM]) {
    int somaReferencia = 0;


    for (int j = 0; j < TAM; j++) {
        somaReferencia += m[0][j];
    }

    for (int i = 1; i < TAM; i++) {
        int somaLinha = 0;
        for (int j = 0; j < TAM; j++) {
            somaLinha += m[i][j];
        }
        if (somaLinha != somaReferencia)
            return 0;
    }


    for (int j = 0; j < TAM; j++) {
        int somaColuna = 0;
        for (int i = 0; i < TAM; i++) {
            somaColuna += m[i][j];
        }
        if (somaColuna != somaReferencia)
            return 0;
    }

    int somaDiagPrincipal = 0;
    for (int i = 0; i < TAM; i++) {
        somaDiagPrincipal += m[i][i];
    }
    if (somaDiagPrincipal != somaReferencia)
        return 0;

    int somaDiagSecundaria = 0;
    for (int i = 0; i < TAM; i++) {
        somaDiagSecundaria += m[i][TAM - 1 - i];
    }
    if (somaDiagSecundaria != somaReferencia)
        return 0;

21
    return 1;
}
