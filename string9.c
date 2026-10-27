//strncmp() 
#include <stdio.h>

int main() {
    char s1[50], s2[50];
    int n;
    gets(s1);
    gets(s2);
    scanf("%d\n", & n);
    printf("String 1 is %s\n", s1);

    printf("String 2 is %s\n", s2);

    printf("after edit: %d", strncmp(s1, s2, n));
    return 0;
}