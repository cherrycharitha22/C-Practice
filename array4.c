//write a program to store and display roll no. of 5 students using arrays:
//optimised program.

#include <stdio.h>
int main(){
float marks[5];

for(int i=0;i<5;i++)
{
printf("enter marks: ");
scanf("%f",& marks[i]);
}

for(int i=0;i<5;i++)
{
printf("enter marks:%f\n",marks[i]);
} 

return 0;
}
