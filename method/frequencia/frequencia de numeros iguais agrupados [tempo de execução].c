#include<stdio.h>

int main()
{
	int vetor[]= {1,1,1,1,3,3,4,4,4,5,5,6,6,9}, i= 0, j= i+1, ocorrencia, valor;

	while(i<14)
	{
		valor= vetor[i];
		ocorrencia= 1;

		while( vetor[i]==vetor[j] )
		{
			ocorrencia++;
			i++, j++;
		}

		i++, j++;

	printf("o valor %d se repete %d vezes\n", valor, ocorrencia);
	}

	return 0;
}
