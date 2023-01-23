#include<stdio.h>
struct student
{
	int sid;
	char name[20];
	float per;
	
};
void main()
{
	struct student s;
	printf(" Enter student id:");
	scanf("%d",&s.sid);
	printf("Enter student name:");
	scanf("%s",&s.name);
	printf("Enter percentage:");
	scanf("%f",&s.per);
	printf("\nRoll no:%d",s.sid);
	printf("\nName:%s",s.name);
	printf("\nPercentage:%sf",s.per);
}