//reverse of a  given number

#include <stdio.h>
int main()
{
int x,rem;
printf("Enter a number:");
scanf("%d",&x);
int rev=0;

	while(x>0)
	{
	rem=(x%10);
	rev=(rev*10)+rem;
	x=x/10;
	}
	
	printf("Reverse= %d\n",rev);
	return 0;
}
		
