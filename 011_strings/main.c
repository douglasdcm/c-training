#include <stdio.h>
#include <string.h>

int function(){
  char string[] = "training"; //string is an array of chars
  printf("String %s\n", string);

  int length = sizeof(string) / sizeof(string[0]);
  for (int i=0; i<(length-1); i++){
    printf("Char %d is %c\n", i, string[i]);
  }

  char special_char[] = "Hi \"your name\" \\ 'other name'\n";
  printf("Special char %s", special_char);

  printf("Strlen of '%s' is %lu\n", string, strlen(string));
  printf("Sizeof of '%s' is %i\n", string, length);
  char new_string[] = "new";
  printf("Strcat of '%s' changes the first string\n", strcat(new_string, new_string));

  char other_string[] = "other";
  char other2[] = "copy me";
  strcpy(other_string, other2); // returns char
  printf("Strcpy of '%s' replace the first string\n", other_string);
  printf("Strcmp of '%s' and '%s' is %i\n", string, new_string, strcmp(string, new_string));
  printf("Strcmp of '%s' and '%s' is %i\n", string, string, strcmp(string, string));

  return 0;
}
