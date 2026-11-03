//wap to read and display employee name,id,designation.
#include <stdio.h>
struct employee
{
	char name[30];
	int id;
	char designation[30];
};
int main()
{
	struct employee e1;
	printf("enter name:\n");
	scanf("%s",e1.name);
	printf("enter id:\n");
	scanf("%d",&e1.id);
	printf("enter designation:\n");
	scanf("%s",e1.designation);
	
	printf("Employee details:\n");
	printf("\t\tName: %s\n",e1.name);
	printf("\t\tID: %d\n",e1.id);
	printf("\t\tDesignation: %s\n",e1.designation);
	return 0;
}
	
