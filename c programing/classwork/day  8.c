#include<stdio.h>
void main()
{ 
int rollno;
char name[10];
int s1,s2,s3,total;
float per;
printf(" \nEnter your roll no:");
scanf("%d",&rollno);
printf("\nEnter your name:");
scanf("%s",&name);
printf("\nEnter your physics marks:");
scanf("%d",&s1);
printf("\n Enter your chemistry marks:");
scanf("%d",&s2);
printf("\nEnter your maths marks:");
scanf("%d",&s3);
total=s1+s2+s3;
per= (float)total/3;
printf("\ntotal:%d",s1+s2+s3);
printf("\npercentage:%.2f",(float)total/3);
if(per>=75)
{
	printf("\ndistinction");
	
}
else if(per>=60)
{
	printf("\ngrade A");

}
else if(per>=50)
{
	printf("\ngrade B");
	
}
else 
{
	printf("\nfail");
}
}