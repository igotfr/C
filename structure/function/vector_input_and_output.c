#include<stdio.h>
#include<stdlib.h>

void entradaVetor(int* pVetor, int x) {
  for(int i = 0; i < x; i++)
    scanf("%i", &pVetor[i]);
}

void mostrarVetor(int* pVetor, int x) {
  for(int i = 0; i < x; i++)
    printf("%i, ", pVetor[i]);
}

int main() {
  int tam = 3, *vetor = malloc(0);

  entradaVetor(vetor, tam);
  printf("\n");
  mostrarVetor(vetor, tam);
}
