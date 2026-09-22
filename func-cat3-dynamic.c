//WAP to perform addition using functions
//cat-3-dynamic
#include <stdio.h>

void add(int, int);
int main()
{
    int a, b;
    printf("enter a:\n");
    scanf("%d", & a);
    printf("enter b:\n");
    scanf("%d", & b);
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