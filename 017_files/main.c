#include <stdio.h>
#include <math.h>

int function(){
  char filename[] = "file.txt";
  FILE *fptr;

  fptr = fopen(filename, "w");
  fprintf(fptr, "some content\n");
  fclose(fptr);

  fptr = fopen(filename, "a");
  fprintf(fptr, "other content\n");
  fclose(fptr);

  char content[100];
  fptr = fopen(filename, "r");
  while (fgets(content, 100, fptr)){
    printf("Content: %s", content);
  };
  fclose(fptr);

  fptr = fopen("notexist.txt", "r");
  if (fptr == NULL){
    printf("Not able to open the file.\n");
    return 0;
  }
  fclose(fptr);  

  return 0;
}
