//wap to read and display laptop company and price using pointers.
#include <stdio.h>
struct laptop
{
	char name[30];
	int price;
};
int main()
{
	struct laptop l1,*l;
	l=&l1;
	printf("enter name:\n");
	scanf("%s",l->name);
	printf("enter price:\n");
	scanf("%d",&l->price);
	
	printf("Laptop details:\n");
	printf("\tName: %s\n",l->name);
	printf("\tPrice: %d\n",l->price);
	return 0;
}

