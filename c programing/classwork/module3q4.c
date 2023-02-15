#include<stdio.h>
void main()
{
	int l;
	int b;
	int choice;
	printf("\nenter the length and breath of the following triangle,circle and rectangle");
	printf("\nfor triangle press T");
	printf("\nfor circle press C");
	printf("\nfor rectangle press R");
	printf("\nwhat is your choice");
	scanf("%s",choice);
	
	printf("\nenter length");
	scanf("%d",&l);
	printf("\nenter the height");
	scanf("%d",&b);
	switch(choice)
	{
		case 'T': printf("area of triangle is %d",1/2*b*l);
		break;
		case'R': printf("are of rectangle is%d",l*b);
		break;
		case 'C': printf("area of circle is %d",22/7*b*b);
		break;
	}
}