//wap to read and display employee name,id,designation using pointers.
#include <stdio.h>
struct employee
{
	char name[30];
	int id;
	char designation[30];
};
int main()
{
	struct employee e1,*e;
	e=&e1;
	printf("enter name:\n");
	scanf("%s",e->name);
	printf("enter id:\n");
	scanf("%d",&e->id);
	printf("enter designation:\n");
	scanf("%s",e->designation);
	
	printf("Employee details:\n");
	printf("\t\tName: %s\n",e->name);
	printf("\t\tID: %d\n",e->id);
	printf("\t\tDesignation: %s\n",e->designation);
	return 0;
}
	
