//decimal to binary
#include <stdio.h>
int main()
{
int n,bin=0,place=1,rem;
printf("enter n:");
scanf("%d",&n);
while(n>0)
{
rem=n%2;
bin=bin+(place*rem);
place=place*10;
n=n/2;
}
printf("%d\n",bin);
return 0;
}


