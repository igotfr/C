#include<stdio.h>
#include<string.h>

int main() {
  char* palavra;

  scanf("%ms", &palavra);
  // or
  scanf("%s", palavra);

  if (strcmp(palavra,"string") == 0)
    printf("A string digitada é %s", palavra);

  return 0;
}
