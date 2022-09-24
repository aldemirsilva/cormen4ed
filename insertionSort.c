#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000000

void meuInsertionSort(int v[], int n) {
    int chave, j;
    for (int i = 2; i < n; i++) {
        chave = v[i];
        j = i - 1;
        while (j > 0 && v[i] > chave) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = chave;
    }
}

int main() {
    int *v, i;

    srand(0);

    v = (int *)malloc(SIZE*sizeof(int));

    if (!v) return EXIT_FAILURE;

    for (i = 0; i < SIZE; i++) v[i] = rand();

    // printf("Iniciando ordenação.\n");

    meuInsertionSort(v, SIZE);

    // printf("Ordenação concluída.\n");

    free(v);
}
