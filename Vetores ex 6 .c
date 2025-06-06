#include <stdio.h>

void imprimeDireta(int v[], int n);
void imprimeInversa(int v[], int n);
void preencheVetor(int v[], int n, int lim); // (usando fórmula determinística)

int main() {
    int vetor[10];
    int n = 10;
    int lim = 50;

    preencheVetor(vetor, n, lim);

    printf("Vetor em ordem direta:\n");
    imprimeDireta(vetor, n);

    printf("Vetor em ordem inversa:\n");
    imprimeInversa(vetor, n);

    return 0;
}

void imprimeDireta(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}


void imprimeInversa(int v[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void preencheVetor(int v[], int n, int lim) {
    for (int i = 0; i < n; i++) {
        v[i] = (i * 7 + 3) % (lim + 1);
    }
}
