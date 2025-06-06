#include <stdio.h>

#define M 3
#define NCOL M

int multiplicaMatrizes(int a[][NCOL], int nla, int nca, int b[][NCOL], int nlb, int ncb, int c[][NCOL]);
void copiaMatriz(int origem[][NCOL], int destino[][NCOL]);
void imprimeMatriz(int mat[][NCOL], int nl, int nc);
void elevaMatriz(int a[][NCOL], int n, int resultado[][NCOL]);

int main() {
    int A[M][NCOL] = {
        {1, 2, 3},
        {0, 1, 4},
        {5, 6, 0}
    };

    int B[M][NCOL] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    int C[M][NCOL];
    int n;

    printf("Matriz A:\n");
    imprimeMatriz(A, M, NCOL);

    printf("\nMatriz B:\n");
    imprimeMatriz(B, M, NCOL);

    printf("\nProduto A * B:\n");
    multiplicaMatrizes(A, M, NCOL, B, M, NCOL, C);
    imprimeMatriz(C, M, NCOL);

    printf("\nA^2:\n");
    multiplicaMatrizes(A, M, NCOL, A, M, NCOL, C);
    imprimeMatriz(C, M, NCOL);

    printf("\nDigite o valor de n para calcular A^n: ");
    scanf("%d", &n);

    elevaMatriz(A, n, C);
    printf("\nA^%d:\n", n);
    imprimeMatriz(C, M, NCOL);

    return 0;
}

int multiplicaMatrizes(int a[][NCOL], int nla, int nca, int b[][NCOL], int nlb, int ncb, int c[][NCOL]) {
    if (nca != nlb) return 0;  // Incompatibilidade

    for (int i = 0; i < nla; i++) {
        for (int j = 0; j < ncb; j++) {
            c[i][j] = 0;
            for (int k = 0; k < nca; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return 1;
}

void copiaMatriz(int origem[][NCOL], int destino[][NCOL]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < NCOL; j++) {
            destino[i][j] = origem[i][j];
        }
    }
}

void imprimeMatriz(int mat[][NCOL], int nl, int nc) {
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
    }
}

void elevaMatriz(int a[][NCOL], int n, int resultado[][NCOL]) {
    int temp[M][NCOL];
    int aux[M][NCOL];

    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            resultado[i][j] = (i == j) ? 1 : 0;

    copiaMatriz(a, temp); 

    for (int exp = 1; exp <= n; exp++) {
        multiplicaMatrizes(resultado, M, NCOL, temp, M, NCOL, aux);
        copiaMatriz(aux, resultado);
    }
}
