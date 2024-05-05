#include <stdio.h>

int function(){
  const int i = 5;
  // i = 10; // error. can't change it
  const int i2;
  // i2 = 10; error too
  return i2;
}
