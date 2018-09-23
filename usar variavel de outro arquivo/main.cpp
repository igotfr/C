#include<stdio.h>
#include "outro.cpp"

// usar a variável do arquivo (module) outro.cpp
extern int x;

int main()
{
	printf("%i", x);
	// outputs 7 que é o valor de x no arquivo outro.cpp
}
