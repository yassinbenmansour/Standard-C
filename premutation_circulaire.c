#include<stdio.h>
int main()
{
	int a, b, c, d, e,mem1 ,mem2 ,mem3 ,mem4;
	
	
	
	mem1=a;
	mem2=b;
	mem3=c;
	mem4=d; 
	
	
	
	a=b;
	mem2=c;
	mem3=d;
	mem4=e;
	e=mem1;
    return 0;
}