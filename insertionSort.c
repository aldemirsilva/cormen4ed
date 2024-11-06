/* Algoritmo insertion sort conforme apersentado no livro Introduction
to Algorithms, fourth edition (978-0262046305) de Thomas Cormen. 
O algortimo recebe como entrada um vetor de números inteiros aleatórios
cujo tamanho é definido pela diretiva de pré-processamento SIZE, bastando
alterar esse valor para executá-lo com tamanhos diferentes. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000000

void insertionSort(int v[], int n) {
  int chave, j;
  for (int i = 1; i < n; i++) {
    chave = v[i];
    j = i - 1;
    while (j >= 0 && v[j] > chave) {
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = chave;
  }
}

int main() {
    int *v, i;

    srand(0);

    v = (int *)malloc(SIZE*sizeof(int));

    if (!v) return EXIT_FAILURE;

    for (i = 0; i < SIZE; i++) v[i] = rand();

    printf("Iniciando ordenação.\n");

    insertionSort(v, SIZE);

    printf("Ordenação concluída.\n");

    free(v);
}
