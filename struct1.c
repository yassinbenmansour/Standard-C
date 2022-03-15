#include <stdio.h>
#include <string.h>

struct Person {
  char name[50];
  int age , naissance;
} person1;

int main() {

  strcpy(person1.name, "yassine benmansour");

  person1.age = 19;
  person1. naissance = 2002;


  printf("Name: %s\n", person1.name);
  printf("age: %d\n", person1.age);
  printf("naissance: %d", person1.naissance);

  return 0;
}