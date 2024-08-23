#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("use of operators:\n");
  int x = 5;
  printf("%d", x);
  printf(" , ");
  x = 7;
  printf("%d", x);
  printf(" , ");
  x = x + 6;
  printf("%d", x);
  printf(" , ");
  x = x - 20;
  printf("%d", x);
  return 0;
}
