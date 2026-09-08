//WAP to check for loss or profit

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
if (MRP<SP)
{
printf("profit\n");
}
else 
{
printf("Break even\n");
}
return 0;
}
