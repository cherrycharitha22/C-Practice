//sum of digits
#include <stdio.h>
int main()
{
int n,x,sum=0;
printf("Enter a number: ");
scanf("%d",&n);

while(n>0)
{
x=n%10;
sum=sum+x;
n=n/10;
}

printf("sum of digits=%d\n",sum);
return 0;
}

