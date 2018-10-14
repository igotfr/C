#include<stdio.h>

int var= 1;

void funcao()
{
  extern int var;
  var= 2;
}

int main()
{
  printf("Valor da variável antes da função ser chamada: %i\n", var);

  funcao();
  printf("Valor da variável após a função ser chamada: %i", var);
}
