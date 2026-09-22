//WAP to perform addition using functions
//cat-2-dynamic
#include <stdio.h>

int add();
int main()
{
    int x;
    x = add();
    printf("addition is %d\n", x);
    return 0;
}
int add()
{
    int a, b, c;
    printf("enter a:\n");
    scanf("%d", & a);
    printf("enter b:\n");
    scanf("%d", & b);
    c = a + b;
    return c;
}