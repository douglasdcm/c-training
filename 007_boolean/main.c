#include <stdio.h>
#include <stdbool.h>

int function(){
  bool yes = true; // 1
  bool no = false; // 0
  int y = yes == 1;
  int n = yes == 0;

  printf("Bool %d, %d\n", y, yes);
  printf("Bool %d, %d\n", n, no);
  return false;
}
