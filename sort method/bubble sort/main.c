#include <stdio.h>

void bubbleSort(int *array_to_sort, int size) {
  int tmp;

  for (int i = 0; i < size; i++)
    for (int j = i + 1; j < size; j++)
      if (array_to_sort[i] > array_to_sort[j]) {
        tmp = array_to_sort[i];
        array_to_sort[i] = array_to_sort[j];
        array_to_sort[j] = tmp;
      }
}

void exibirVetor(int *pVetor, int size) {
  for (int x= 0; x<size; x++)
    printf("%i, ", pVetor[x]);
}

int main() {
  int vetor[] = {6,2,5,6,8,4,3,1,6,8}, tam = 10;

  bubbleSort(vetor, tam);
  exibirVetor(vetor, tam);

  return 0;
}
