#include <stdio.h>

int function(){
  int i;
  int i2=0;
  float f;
  double d;
  char c;

  printf("Integer %lu\n", sizeof(i)); // %lu is long unassigned int
  printf("Integer %lu\n", sizeof(i2));
  printf("Float %lu\n", sizeof(f));
  printf("Double %lu\n", sizeof(d));
  printf("Char %lu\n", sizeof(c));
  return 0;
}
