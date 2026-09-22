//WAp to display addition of 2 numbers using functions
//cat-2
#include <stdio.h>

int add();
int main()
{
    int x;
    x = add();
    printf("addition is = %d", x);
}
int add()
{
    int a = 10, b = 20, c;
    c = a + b;
    return c;
}