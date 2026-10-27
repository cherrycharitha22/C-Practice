//strstr() by static method
#include <stdio.h>

int main() {
    char s1[20], s2[20], s;
    gets(s1);
    gets(s2);
    printf("String 1 is %s\n", s1);
    printf("String 2 is %s\n", s2);
    printf("after edit: %s", strstr(s1, "m"));
    return 0;
}