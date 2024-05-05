#include <stdio.h>

int function(){
  if (1 == 1){
    //do
  }
  else if (0 == 0){
    //do
    int x;
    int y;
    int s = x + y;
  }
  else {
    //do
  };

  int var = 0;
  var = 1 ? printf("var is 1\n") : printf("var is not 1\n");
  
  int x;
  int y;
  int s;
  switch (var)
  {
  case 1:
    // do
    s = x + y;
    break;
  case 2:
    // do
    break;
  default:
    break;
  }

  return 0;
}
