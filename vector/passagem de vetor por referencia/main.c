#include<stdio.h>

void alterarVetor(int *parametroVetor, int tam)
{
  for(int i=0; i<tam; i++)
    parametroVetor[i]+= 1;
}

void exibirVetor(int *pVetor, int size)
{
  for(int i=0; i<4; i++)
    printf("%i, ", pVetor[i]);
}

int main()
{
  int vetor[]= {1,2,4,7}, tam= 4;

  alterarVetor(vetor, tam);
  exibirVetor(vetor, tam);

  return 0;
}
