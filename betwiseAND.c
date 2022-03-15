#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d", a&b);
    return 0;
}



/*128 64 32 16 8 4 2 1
0  0  0  0  1  1  0  0 = 12
0  0  0  1  1  0  0  1 = 25
----------------------------
0  0  0  0  1  0  0  0 =  8


betwise and */