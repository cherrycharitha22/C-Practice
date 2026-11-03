//wap to read and display student details
#include <stdio.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
	int backlog;
};
int main()
{
	struct student s1;

	printf("enter name:\n");
	scanf("%s",s1.name);
	printf("enter roll no.:\n");
	scanf("%d",&s1.roll);
	printf("enter cgpa:\n");
	scanf("%f",&s1.cgpa);
	printf("enter backlog:\n");
	scanf("%d",&s1.backlog);
	
	printf("student details:\n");
	printf("\tname: %s \n",s1.name);
	printf("\troll no.: %d \n",s1.roll);
	printf("\tcgpa: %f \n",s1.cgpa);
	printf("\tbacklog:%d \n",s1.backlog);
	return 0;
}
	
