#include<stdio.h>

char letra()
{
  char generico= 'f';
  return generico;
}

int main()
{
  char l= letra();
  printf("%c", l);
}
