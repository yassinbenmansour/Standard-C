#include <stdio.h>

void repeat(int rept){
  int i ;
  for (i = 0; i < rept ; i++) {
    printf("$$$$$$$ la fcts void $$$$$$$ \n" );
  }
}



int main() {

  repeat(10);
  return 0;
}
