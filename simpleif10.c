//WAP to check for loss

#include <stdio.h>
int main()
{ 
int MRP,SP;

printf("enter MRP: ");
scanf("%d",&MRP);

printf("enter SP: ");
scanf("%d",&SP);

if (MRP>SP)
{
printf("loss\n");
}
return 0;
}
