#include <stdio.h>

int function(){
  int sum = 1 + 5;
  int sub = 1 - 5;
  int mult = 1 * 5;
  int div = 1 / 5;
  int mod = 1 % 5;
  int inc = 1, dec = 1;
  inc++;
  dec--;
  
  if (1 < 0 && 0 > 1){} // and
  if (1 < 0 || 0 > 1){} // or
  if (! (1 < 0 || 0 > 1)){} //not
  
  return 0;
}
