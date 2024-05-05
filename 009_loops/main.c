#include <stdio.h>

int function(){
  int var;
  while (var == 0) {
    printf("In loop\n");
    var = 1;
  }

  while (var < 10) {
    printf("IN loop %d\n", var);
    var++;
  }

  var = 0;
  do {
    printf("Doing %d\n", var);
    var++;
  } while (var < 10);

  for (var = 0; var < 10; var++) {
    printf("For iteration %d\n", var);
  }

  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 5; j++){
      printf("I%d, J%d\n", i, j);
    }
  }

  for (int i=0; i<10; i++){
    printf("'i' is %d before break\n", i);
    if (i == 6) {
      break;
    }
  }


  for (int i=0; i<10; i++){
    if (i == 6) {
      continue;;
    }
    printf("'i' is %d after continue\n", i);
  }

  var = 0;
  while (var < 10) {
    printf("In loop %d\n", var);
    if (var == 6){
      break;
    }
    var++;
  }

  printf("----------\n");
  var = 0;
  while (var < 10) {
    if (var == 6){
      var ++;
      continue;
    }
    printf("In loop %d\n", var);
    var++;
  }

  return 0;
}
