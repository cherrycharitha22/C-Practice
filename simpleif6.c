//WAP to print eligible if given age is greater than or equal to 18 and not eligible if given age is less than 18

#include <stdio.h>
int main()
{ 
int age;
printf("enter age: ");
scanf("%d",&age);
if (age>=18)
{
printf("eligible\n");
}
else 
{
printf("not eligible\n");
}
return 0;
}
