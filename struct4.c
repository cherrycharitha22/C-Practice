//wap to read and display name,roll no. ,cgpa,backlog of n students.
#include <stdio.h>
struct students
{
	char name[30];
	int roll;
	float cgpa;
	int backlog;
};
int main()
{
	
	int n;
	printf("enter no.of students:\n");
	scanf("%d",&n);
	struct students s[n];
	for(int i=0;i<n;i++)
	{
		printf("enter name of %d student:\n",i+1);
		scanf("%s",s[i].name);
		printf("enter rollno:\n");
		scanf("%d",&s[i].roll);
		printf("enter cgpa:\n");
		scanf("%f",&s[i].cgpa);
		printf("enter backlogs:\n");
		scanf("%d",&s[i].backlog);
		
		printf("Student %d details:\n",i+1);
		printf("\tName: %s\n",s[i].name);
		printf("\tRollno: %d\n",s[i].roll);
		printf("\tCGPA: %.2f\n",s[i].cgpa);
		printf("\tNo.of backlogs: %d\n\n",s[i].backlog);
	}
	return 0;
}
