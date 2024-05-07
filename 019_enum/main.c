#include <stdio.h>
#include <string.h>

int function(){
  enum Level {
    LOW,
    MEDIUM,
    HIGH
  };

  enum Level debug = LOW;
  printf("Level is %d\n", debug);

  enum Grade {
    A = 10,
    B = 9,
    C = 8,
    D = 7
  };
  enum Grade grade = B;
  printf("Grade is %d\n", grade);

  return 0;
}
