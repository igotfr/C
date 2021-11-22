#include<stdio.h>

void f_impl(int a, float b) {
  printf("%d %g\n", a, b);
}

#define f_impl(...) f_macro(__VA_ARGS__, 3.7)
#define f_macro(a, b, ...) f_impl(a, b)

int main(void) {
  f_impl(1);
  f_impl(1, 2, 3, 4);

  return 0;
}
