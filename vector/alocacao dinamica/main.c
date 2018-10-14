#include<stdio.h>
#include<stdlib.h>

void entradaVetor(int *pVetor, int size)
{
  for(int i= 0; i<=size; i++)
    scanf("%i", &pVetor[i]);
}

void mostrarVetor(int *pVetor, int size)
{
  for(int i= 0; i<=size; i++)
    printf("Index %i: %i\n", i, pVetor[i]);
}

int main(void)
{
  int *vetor= malloc(0), tam= 2;

  entradaVetor(vetor, tam);
  printf("\n");
  mostrarVetor(vetor, tam);

  free(vetor);

  return 0;
}
