#include <stdio.h>

int main(void) {
  int i = 10;
  char str[] = "hello world";
  for (i = 0; i < 10; i++) printf("%s %d\n", str, i);
  return 0;
}