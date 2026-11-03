//wap to rad and display name and price of n laptop's.
#include <stdio.h>
struct laptop
{
	char name[30];
	float price;
};
int main()
{
	
	int n;
	printf("enter no.of laptop's:\n");
	scanf("%d",&n);
	struct laptop l[n];
	for(int i=0;i<n;i++)
	{
		printf("enter name of laptop %d:\n",i+1);
		scanf("%s",l[i].name);
		printf("enter price:\n");
		scanf("%f",&l[i].price);
		
		printf("Laptop %d details:\n",i+1);
		printf("\tName: %s\n",l[i].name);
		printf("\tPrice: %.2f\n",l[i].price);
	}
	
	return 0;
}
