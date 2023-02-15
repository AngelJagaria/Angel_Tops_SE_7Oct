#include<stdio.h>
void main()
{
	int a,b;
	printf("\nenter the value of A:");
	scanf("%d",&a);
	printf("\nenter the value of B:");
	scanf("%d",&b);
	printf("A=%d and B=%d",a,b);
	if(a%2==0)
	{
		printf("\n A is even");
		
	}
	else
	{
		printf("\n B is odd");
	}
}