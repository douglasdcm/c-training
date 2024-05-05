#include <stdio.h>

int function(){
  int arr[10];
  for (int i=0; i<10; i++){
    // Initialized with random integer
    printf("Element arr %d\n", arr[i]);
  }


  int brr[10];
  for (int i=0; i<10; i++){
    brr[i] = i;
    printf("Element brr %d\n", brr[i]);
  }

  int crr[] = {0,0,0,0,0};
  int length = sizeof(crr) / sizeof(crr[0]);
  printf("Size in bytes %lu\n", sizeof(crr));
  printf("Size in length %i\n", length);
  
  for (int i=0; i<(length -1); i++){
    printf("Elem %d\n", i);
  }

  int drr[2][2] = {{0,1}, {2,3}};
  printf("Element '0,2' is %d\n", drr[0][2]); 
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      printf("Elem '%d,%d' is %d\n", i,j,drr[i][j]);
    }  
  }

  int err[2][2][2] = {
        {{1,2},{5,6}},
        {{3,4},{7,8}}
      };
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      for (int k=0; k<2; k++){
        printf("Elem '%d,%d,%d' is %d\n", i,j,k,err[i][j][k]);
      }
    }  
  }

  
  return 0;
}
