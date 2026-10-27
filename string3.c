//strcpy()
#include <stdio.h>

int main() {
char s1[20],s2[20];
	gets(s1);
	gets(s2);
	printf("String 1 is %s\n",s1);
	printf("String 2 is %s\n",s2);
	strcpy(s1,s2);
    printf("s1: %s\n",s1);
    printf("s2: %s\n",s2);

	return 0;
}

