#include<stdio.h>
#include "outro.c"

// usar a variável do arquivo (module) outro.c
extern int x;

int main()
{
	printf("%i", x);
	// outputs 7 que é o valor de x no arquivo outro.c
}
