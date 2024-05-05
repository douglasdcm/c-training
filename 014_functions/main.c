#include <stdio.h>
#include <string.h>

// good practic for organization
// declaration of the function
int sum(int x,int y);
char* greeting(char* name);
int* add_item(int* arr, int index, int item);


// main
int function(){
  printf("Sum %i\n", sum(1,2));
  
  char name[30] = "Mary";
  printf("Greetings: %s\n", greeting(name));

  int arr[10] = {0,2,4,6,8};
  add_item(arr, 8, 10);
  for (int i=0; i<10;i++){
    printf("Item: %i is %i\n", i, arr[i]);
  }

  return 0;

}

// definitioon of the funtion
int sum(int x,int y){
  return x+y;
}

char* greeting(char* name){
  char new_name[30] = "Ola, ";
  strcat(new_name, name);
  strcpy(name, new_name);
  return name;
}

int* add_item(int* arr, int index, int item){
  arr[index] = item;
  return arr;
}
