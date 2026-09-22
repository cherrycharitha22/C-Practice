//write a program to store and display roll no. using arrays:
//dynamic program
#include <stdio.h>
int main(){
int ht[5];

printf("enter 1st student ht no. \n");
scanf("%d",&ht[0]);

printf("enter 2nd student ht no. \n");
scanf("%d",&ht[1]);

printf("enter 3rd student ht no. \n");
scanf("%d",&ht[2]);

printf("enter 4th student ht no. \n");
scanf("%d",&ht[3]);

printf("enter 5th student ht no. \n");
scanf("%d",&ht[4]);
for (int i=1;i<=5;i++)
{
printf("ht no. of %d is: %d\n",i,ht[i-1]);
}
return 0;
}
