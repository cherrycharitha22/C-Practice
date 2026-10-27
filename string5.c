//strchr()
#include <stdio.h>

int main() {
char s1[20],s2[20],c;
	gets(s1);
	gets(s2);
	scanf("%c\n",&c);
	printf("String 1 is %s\n",s1);
	printf("String 2 is %s\n",s2);
    printf("s1: %s\n",s1);
    printf("s2: %s\n",s2);
    printf("after edit: %s",strchr(s1,c));
	return 0;
}

