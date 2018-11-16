#include<stdio.h>

int main()
{
	int n= 14, vetor[]= {1,1,1,1,3,3,4,4,4,5,5,6,6,9}, iVetor= 0, jVetor= iVetor+1, freq[n], vetorExclusivos[n], iVExclusivos= 0;

	while( iVetor<14 )
	{
		vetorExclusivos[iVExclusivos]= vetor[iVetor];
		freq[iVExclusivos]= 1;

		while( vetor[iVetor]==vetor[jVetor] )
		{
			freq[iVExclusivos]++;
			iVetor++, jVetor++;
		}

		iVExclusivos++;
		iVetor++, jVetor++;
	}

	for(int x= 0; x<iVExclusivos; x++)
		printf("numero: %i\tocorrencias: %i\n", vetorExclusivos[x], freq[x]);

	return 0;
}
