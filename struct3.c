//wap to read and display laptop company and price.
#include <stdio.h>
struct laptop
{
	char name[30];
	int price;
};
int main()
{
	struct laptop l1;
	printf("enter name:\n");
	scanf("%s",l1.name);
	printf("enter price:\n");
	scanf("%d",&l1.price);
	
	printf("Laptop details:\n");
	printf("\tName: %s\n",l1.name);
	printf("\tPrice: %d\n",l1.price);
	return 0;
}

