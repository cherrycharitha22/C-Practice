//WAP to perform addition using functions
//cat-1-dynamic
#include <stdio.h>

void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a, b, c;
    printf("enter a:\n");
    scanf("%d", & a);
    printf("enter b:\n");
    scanf("%d", & b);
    c = a + b;
    printf("Addition is %d\n", c);
}