#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char* string= malloc(0);

  // sairá da iteração (loop) quando o usuáário digitar "buceta"
  while(strcmp(string,"buceta"))
    scanf("%s", string);

  // para fazer de forma contrária, sair da iteração quando for digitado qualqer string diferente de "buceta", basta colocar um ! no strcmp: !strcmp(string,"buceta")

  free(string);
}

/*** Observações

char* string= malloc(0);
funciona com:
  scanf("%s", string);
  scanf("%ms", &string);
mas não funciona com 
  scanf("%s", &string);
    não importa o qe digite, só dá pra digitar uma vez, depois mostra a mensagem "exit status -1"
  scanf("%ms", string);
    entra no loop mas não comparara a palavra corretamente, mesmo digitando a condição de saída não sai da iteração

char string[6];
funciona com:
  scanf("%s", &string);
  scanf("%s", string);
mas não funciona com 
  scanf("%ms", &string);
  scanf("%ms", string);
    entra no loop mas não comparara a palavra corretamente, mesmo digitando a condição de saída não sai da iteração:

não funciona de forma alguma:
    char* string;

***/
