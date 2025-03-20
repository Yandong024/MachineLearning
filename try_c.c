#include <stdio.h>

int try_num(){
  return 1;
}

int main(int argc, char const *argv[])
{
  int a = try_num();
  printf("%d\n", a);
  return 0;
}
