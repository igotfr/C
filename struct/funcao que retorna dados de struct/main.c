#include<stdio.h>

typedef struct Nome
{
  int Mem1;
  float Mem2;
} tipo;

tipo dados(int mem1, float mem2)
{
  tipo varLocal;

  varLocal.Mem1= mem1;
  varLocal.Mem2= mem2;

  return varLocal;
}

int main()
{
  tipo var1= dados(1,500),
       var2= dados(2,750);

  printf("%.4f", var2.Mem2);

  return 0;
}
