#include <stdio.h>

int main()
{
	int l;
	int i=1;
	printf("enter limit:");
	scanf("%d",&l);
	while(i<=l)
	{
	printf("cube of %d is %d\n",i,i*i*i);
	i++;
	}
	return 0;
	}
