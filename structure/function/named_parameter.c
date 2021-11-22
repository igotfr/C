#include<stdio.h>

typedef struct {
  int a;
  float b;
} named_param;

void f_impl(named_param np) {
  printf("%d %g", np.a, np.b);
}

#define f_macro(...) f_impl((named_param){__VA_ARGS__})

int main() {
  f_macro(.a = 4, .b = 9.7);
  //f_impl((named_param){.a = 7, .b = 6.2});

  return 0;
}
