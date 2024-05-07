#include <stdio.h>
#include <stdlib.h>

struct list {
  int *data; // points to memory
  int numItems; // current number of items in list
  int size; // number of items fit the allocated memory
};

void addToList(struct list *myList, int item);

int function(){
  
  // pointer
  int *students;
  int numStudents = 12;

  // allocate bytes for each element
  // need to return to student to be able to set values later
  students = calloc(numStudents, sizeof(*students));
  printf("Size in bytes %lu\n", numStudents * sizeof(*students));

  students[0] = 10;
  students[1] = 7;
  students[2] = 2;
  printf("Values %d, %d, %d\n", students[0], students[1], students[2]);


  int *prt1, *prt2, size;

  size = 4 * sizeof(*prt1);
  prt1 = malloc(size);
  if (prt1 == NULL){
    printf("Failed to alocate memory\n");
    return 1;
  }

  printf("%d memory to %p\n", size, prt1);

  size = 6 * sizeof(*prt1);
  prt2 = realloc(prt1, size);
  if (prt2 == NULL){
    printf("Failed to realocate memory\n");
    return 1;
  }
  prt1 = prt2; // after realocate the original poiter dies. assign the new one for safety
  printf("%d memory to %p\n", size, prt1);
  
  free(prt1);
  prt1 = NULL; // good practice after freeing memory


  // real example
  struct list myList;
  int amount;

  // create a list to hold 10 items
  myList.numItems = 0; // empty list
  myList.size = 10;
  myList.data = malloc(myList.size * sizeof(int));

  // check if enough memory allocation
  if (myList.data == NULL){
    printf("Memory allocation failed");
    return 1;
  }
  amount = 44;
  for (int i=0; i < amount; i++){
    addToList(&myList, i + 1);
  }

  for (int j=0; j < myList.numItems; j++){
    printf("%d ", myList.data[j]);
  }

  free(myList.data);
  myList.data = NULL;

  return 0;
}

void addToList(struct list *myList, int item) {

  if (myList->numItems == myList->size){
    myList->size += 10;
    myList->data = realloc(myList->data, myList->size * sizeof(int));
  }

  myList->data[myList->numItems] = item;
  myList->numItems++;
}

