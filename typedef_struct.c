#include <stdio.h>
#include <string.h>

// struct with typedef person
typedef struct Person {
  char name[50];
  int age , naissance;
} person;
 
int main() {

  // create  Person variable
  person p1;

  // assign value to name of p1
  strcpy(p1.name, "Yassine benmansour");

  // assign values to other p1 variables
  p1.age = 19;
  p1. naissance = 2002;

  // print struct variables
  printf("Name: %s\n", p1.name);
  printf("age: %d\n", p1.age);
  printf("naissance: %d", p1.naissance);

  return 0;
}