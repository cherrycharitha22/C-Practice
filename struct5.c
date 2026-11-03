//wap to read and display name,id,salary,designation of n employee.
#include <stdio.h>
struct employee
{
	char name[30];
	int id;
	float salary;
	char designation[30];
};
int main()
{
	
	int n;
	printf("enter no.of employee:\n");
	scanf("%d",&n);
	struct employee e[n];
	for(int i=0;i<n;i++)
	{
		printf("enter name of %d employee:\n",i+1);
		scanf("%s",e[i].name);
		printf("enter id:\n");
		scanf("%d",&e[i].id);
		printf("enter salary:\n");
		scanf("%f",&e[i].salary);
		printf("enter designation:\n");
		scanf("%s",e[i].designation);
		
		printf("Employee %d details:\n",i+1);
		printf("\tName: %s\n",e[i].name);
		printf("\tID: %d\n",e[i].id);
		printf("\tSalary: %.2f\n",e[i].salary);
		printf("\tDesignation: %s\n\n",e[i].designation);
	}
	return 0;
}
