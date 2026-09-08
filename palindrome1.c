//check whether a given number is a palindrome.
#include <stdio.h>
int main()
{
int x,rev=0,rem;
printf("Enter a number: ");
scanf("%d",&x);
int y=x;
while(x>0)
{
rem=x%10;
rev=(rev*10)+rem;
x=x/10;
}

if (rev==y)
{
printf("%d is a palindrome number\n",y);
}
else
{
printf("%d is not a palindrome number\n",y);
}
return 0;
}

