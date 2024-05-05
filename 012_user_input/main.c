#include <stdio.h>

int function(){

  printf("Inform any number: ");
  int user_number;
  scanf("%i", &user_number);
  printf("The number is %i\n", user_number);


  printf("Inform any number and any character: ");
  user_number;
  char user_char;
  scanf("%i %c", &user_number, &user_char);
  printf("The number is %i and the char is %c\n", user_number, user_char);

  printf("Inform any string: ");
  char user_string[30];
  scanf("%s", user_string);
  printf("The string is %s\n", user_string);
  
  printf("Inform any phrase: ");
  char user_phrase[30];
  fgets(user_phrase, sizeof(user_phrase), stdin);
  printf("The phrase is '%s'\n", user_phrase);


  return 0;
}
