#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void preencheMatriz(int m[LINHAS][COLUNAS], int lim);
void imprimeMatriz(int m[LINHAS][COLUNAS]);
void encontraMinimax(int m[LINHAS][COLUNAS]);

int main() {
    int matriz[LINHAS][COLUNAS];

    preencheMatriz(matriz, 10);  // Preenche com valores até 10
    printf("Matriz gerada:\n");
    imprimeMatriz(matriz);

    encontraMinimax(matriz);

    return 0;
}

void preencheMatriz(int m[LINHAS][COLUNAS], int lim) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            m[i][j] = (i * 3 + j * 5 + 1) % (lim + 1);
        }
    }
}

void imprimeMatriz(int m[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void encontraMinimax(int m[LINHAS][COLUNAS]) {
    int maior = m[0][0];
    int linhaMaior = 0, colunaMaior = 0;


    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (m[i][j] > maior) {
                maior = m[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    int minimax = m[linhaMaior][0];
    int colunaMinimax = 0;
    for (int j = 1; j < COLUNAS; j++) {
        if (m[linhaMaior][j] < minimax) {
            minimax = m[linhaMaior][j];
            colunaMinimax = j;
        }
    }

  
    printf("\nMaior elemento: %d (linha %d, coluna %d)\n", maior, linhaMaior, colunaMaior);
    printf("Elemento minimax (menor da linha do maior): %d (linha %d, coluna %d)\n",
           minimax, linhaMaior, colunaMinimax);
}
