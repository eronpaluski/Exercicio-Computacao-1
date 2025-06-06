#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[], int n, int lim);

int main() {
    int n = 10; // Tamanho do vetor
    int lim = 50; // Limite superior dos números aleatórios
    int vetor[10];

       srand(time(NULL));

    preencheVetor(vetor, n, lim);

    printf("Vetor preenchido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

void preencheVetor(int v[], int n, int lim) {
    for (int i = 0; i < n; i++) {
        v[i] = rand() % (lim + 1); // Gera número entre 0 e lim (inclusive)
    }
}
