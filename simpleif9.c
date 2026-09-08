//WAP to check for profit

#include <stdio.h>
int main()
{ 
int MRP,SP;

printf("enter SP: ");
scanf("%d",&SP);

printf("enter MRP: ");
scanf("%d",&MRP);

if (MRP<SP)
{
printf("profit\n");
}
return 0;
}
