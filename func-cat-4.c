//WAP to perform addition using functions
//cat-4
#include <stdio.h>

int add(int, int);
int main()
{
    int a = 10, b = 20, z;
    z = add(a, b);
    printf("Addition is =%d\n", z);
    return 0;
}
int add(int x, int y)
{
    int c;
    c = x + y;
    return c;
}