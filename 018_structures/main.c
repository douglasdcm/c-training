#include <stdio.h>
#include <string.h>

int function(){
  
  struct Address
  {
    // not a good practice if the value is changeble, because the size 
    // depends on the first string inserted
    char* street;
    int number;
  };

  struct People {
    char* name;
    char occupation[10]; // other option to set strings. use strcpy
    int age;
    struct Address address;    
  };

  struct People me;
  me.name = "John";
  strcpy(me.occupation, "teacher");
  me.age = 89;
  printf("I am %s. I am %d years old. I work as a %s\n", me.name, me.age, me.occupation);
  
  me.address.street = "Pallace street";
  me.address.number = 453;
  printf("I live in %s number %d\n", me.address.street, me.address.number);

  struct People you = {"Mary", "maior", 78, {"King street", 876}};
  printf("You is %s, %d years old, %s and I live in %s, %d\n", 
          you.name, you.age, you.occupation, you.address.street, you.address.number);
  
  you = me;
  printf("You is %s, %d years old, %s and I live in %s, %d\n", 
          you.name, you.age, you.occupation, you.address.street, you.address.number);
  
  strcpy(you.occupation, "president"); 
  printf("I am %s\n", you.occupation);
  
  return 0;
}
