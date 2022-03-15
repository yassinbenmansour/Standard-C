#include <stdio.h>

int function_tiple(int a){
  int result ;
  result = a * 3 ;
  return result ;
  
}


int main() {
  int a , result ;
  printf("entree nbr : ");
  scanf("%d",&a);
  result= function_tiple(a);
  printf("%d\n",result );
  return 0;
}


