#include <stdio.h>

int function(){
  float div1 = 5 / 2;
  float div2 = (float) 5 / 2;

  printf("Division %f\n", div1); // 2.0000
  printf("Division %f\n", div2); // 2.5000
  return 0;
}
