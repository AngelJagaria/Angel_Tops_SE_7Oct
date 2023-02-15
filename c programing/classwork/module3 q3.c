#include<stdio.h>
void main()
{
	int a;
	printf("\nenter the value of A:");
	scanf("%d",&a);
	printf("A=%d",a);
	if(a%2==0)
	{
		printf("\n A is even");
		
	}
	else
	{
		printf("\n it is odd");
	}
}