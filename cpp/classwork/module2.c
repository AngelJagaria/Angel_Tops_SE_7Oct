#include<stdio.h>
void main ()
{
	int p;
	int t;
	int r;
	int simpleinterest;
	printf("\nEnter :");
	scanf("%d",&p);
	printf("\nenter the rate of intersest:");
	scanf("%d",&r);
	printf("\nenter the amount");
	scanf("%d",&t);
	simpleinterest=p*t*r;
	printf("\n the simpleintrest is:%d",simpleinterest/100);
	printf("\ncompont interstis:%d",simpleinterest-p);
	
}