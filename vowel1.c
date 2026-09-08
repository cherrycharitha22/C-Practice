//check whether a given number is a palindrome.
#include <stdio.h>
int main()
{
char x;
printf("Enter a character: ");
scanf("%c",&x);

switch(x)
{
case 'A': printf("%c is a vowel.",x);break;
case 'a': printf("%c is a vowel.",x);break;

case 'E': printf("%c is a vowel.",x);break;
case 'e': printf("%c is a vowel.",x);break;

case 'I': printf("%c is a vowel.",x);break;
case 'i': printf("%c is a vowel.",x);break;

case 'O': printf("%c is a vowel.",x);break;
case 'o': printf("%c is a vowel.",x);break;

case 'U': printf("%c is a vowel.",x);break;
case 'u': printf("%c is a vowel.",x);break;

default: printf("%c is not a vowel.",x);
}

return 0;
}

