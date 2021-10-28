#include<stdio.h>

void selectionSort(int* pVetor, int size) {
  int aux;

  for (int i = 0; i < size; i++) {
    int indiceMenor = i;

    for (int j = i + 1; j < size; j++)
      if (pVetor[indiceMenor] > pVetor[j])
        indiceMenor = j;

    if (i!=indiceMenor) {
      aux = pVetor[i];
      pVetor[i] = pVetor[indiceMenor];
      pVetor[indiceMenor] = aux;
    }
  }
}

void mostrarVetor(int* pVetor, int size) {
  for (int x = 0; x < size; x++)
    printf("%i, ", pVetor[x]);
}

int main() {
  int vetor[] = {6,2,5,6,8,4,3,1,6,8}, tam= 10;

  selectionSort(vetor, tam);
  mostrarVetor(vetor,tam);

  return 0;
}
