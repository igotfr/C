#include<stdio.h>

int main()
{
  int achou, n= 7, i, j, k= -1, freq[n];
  float vetor[]= {6,6,8,6,8,9,4}, vetorExcusivos[n];

  for(i=0; i<n; i++)
  {
    achou= 0;

    for(j=0; j<=k; j++)
      if(vetor[i]==vetorExcusivos[j])
      {
        achou= 1;
        freq[j]++;
        break;
      }

    if(!achou)
    {
      k++;
      vetorExcusivos[k]= vetor[i];
      freq[k]= 1;
    }
  }

  printf("   Num   Freq\n");
  for (j = 0; j <= k; j++)
  {
    printf("%6.1lf", vetorExcusivos[j]);
    printf("%7d\n", freq[j]);
  }

  return 0;
}
