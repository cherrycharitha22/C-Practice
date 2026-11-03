//wap to read and display student details using pointers.
#include <stdio.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
};
int main()
{
	struct student *s,st1;
	s=&st1;
	printf("enter name:\n");
	scanf("%s",s->name);
	printf("enter roll no.:\n");
	scanf("%d",&s->roll);
	printf("enter cgpa:\n");
	scanf("%f",&s->cgpa);

	printf("student details:\n");
	printf("\tname: %s \n",s->name);
	printf("\troll no.: %d \n",s->roll);
	printf("\tcgpa: %.2f \n",s->cgpa);
	
	return 0;
}
	
