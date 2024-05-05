#include <stdio.h>

int function(){

  int number = 42;
  printf("Memory address is %p\n", &number);

  int* poniter_of_number = &number; // OR int *poniter_of_number = &number
  printf("Memory address of number is %p\n", &number);
  printf("Value of number is %i\n", number);
  
  printf("Memory address of pointer_to_number is %p\n", poniter_of_number);
  printf("Value of pointer_to_number is %i\n", *poniter_of_number);

  int arr[] = {0,2,4,6,8};
  printf("Memory of array is %p\n", arr);
  printf("First value of array is %i\n", *arr);

  for (int i=0; i<5; i++){
    printf("Memory of array element %i is %p\n", arr[i], &arr[i]);
  }

  for (int i=0; i<5; i++){
    // get value by sum of memory
    printf("Value of array element %i is %i\n", i, *(arr + i));
  }

  printf("brr----\n");
  char brr[] = {'t','e','s','t'};
  printf("Memory of array is %p\n", brr);
  printf("First value of array is %c\n", *brr);

  for (int i=0; i<5; i++){
    printf("Memory of array element %c is %p\n", brr[i], &brr[i]);
  }

  for (int i=0; i<5; i++){
    // get value by deferencing poiner '*&'
    printf("Value of array element '%i-%c' is %c\n", i,brr[i], *&brr[i]);
  }

  int crr[2][2] = {{0,2}, {4,6}};
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      // get value by deferencing poiner '*&'
      printf("Memory of array element '(%i,%i) %i' is %p\n", i,j,crr[i][j], &crr[i][j]);
      printf("Value of array element '(%i,%i) %i' is %i\n", i,j,crr[i][j], *(&crr[i][j]));
      printf("Value of array element '(%i,%i) %i' is %i\n", i,j,crr[i][j], *(crr[i] + j));
    }
  }

  return 0;

}
