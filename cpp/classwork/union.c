#include<stdio.h>
union Student
{
	int student_id;
	char student_name[10];
	float student_per;
};
void main()
{
	union Student s1;
	printf("\nEnter id:");
	scanf("%d",&s1.student_id);
	printf("id:%d",s1.student_id);
	printf("\nEnter name:");
	scanf("%s",&s1.student_name);
	printf("name:%s",s1.student_name);
	printf("\nEnter per:");
	scanf("%f",&s1.student_per);
	printf("per:%2f",s1.student_per);
}