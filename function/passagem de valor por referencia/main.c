// Na passagem por referência, a variável que é alterada dentro da função, altera o valor da variável original

#include<stdio.h>

void func1(int *passed)
{
  *passed= 6;
}

void func2(int *passed)
{
  printf("%i\n", *passed);
  printf("%i\n", passed);
}

int main()
{
  int s= 2;
  printf("%i\n", s);

  func1(&s);
  printf("%i\n", s);

  func2(&s);
  printf("%i", s);
}
