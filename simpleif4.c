//WAP to print positive,zero,negative

#include <stdio.h>
int main()
{ 
int a;
printf("enter a number: ");
scanf("%d",&a);
if (a<0)
{
printf("negative\n");
}
if (a>0)
{
printf("positive\n");
}
if (a==0)
{
printf("zero\n");
}
return 0;
}

