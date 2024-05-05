#include <stdio.h>

int function(){
  int i = 1;
  float f = 1.0;
  float f2 = 1e2;
  double d = 1.0;
  double d2 = 1E2;
  char c = 'c'; // single quote
  char s[] = "string";

  printf("Integer %d\n", i);
  printf("Integer %i\n", i);
  
  printf("Float %f\n", f);
  printf("Float %F\n", f);
  printf("Float %f\n", f2);
  printf("Float %.1f\n", f2);
  printf("Float %.2f\n", f2);
  
  printf("Double %lf\n", d);
  printf("Double %lf\n", d2);
  printf("Double %.0lf\n", d2);
  printf("Double %.1lf\n", d2);
  
  printf("Char %c\n", c);
  printf("String %s\n", s);
  return 0;
}

int multiple_variables(){
  int i1 = 0, i2 = 1, i3 =2;
  printf("Variables sum %d\n", i1 + i2 + i3);
  return 0;
}
