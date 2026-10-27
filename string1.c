#include <stdio.h>

int main() {
char s1[20],s2[20];
	
	gets(s1);
	gets(s2);
	printf("String 1 is %s\n",s1);
	printf("String 2 is %s\n",s2);
	printf("length of String 2 is: %d\n",strlen(s2));
	return 0;
}

