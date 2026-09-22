//write a program to store and display roll no. of 5 students using arrays:
//optimised program.

#include <stdio.h>
int main(){
int i,ht[5];

for(i=0;i<=4;i++)
{
printf("enter ht no. ");
scanf("%d",&ht[i]);
}

for(i=0;i<=4;i++)
{
printf("ht no. of %d student is:%d \n",i+1,ht[i]);
}

return 0;
}
