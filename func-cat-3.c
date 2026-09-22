//WAP to perform addition using functions
//cat-3
#include <stdio.h>

void add(int, int);
int main()
{
    int a = 10, b = 20;
    add(a, b);
    return 0;
}
void add(int x, int y)
{
    int c;
    c = x + y;
    printf("Addition is %d\n", c);
    return c;
}