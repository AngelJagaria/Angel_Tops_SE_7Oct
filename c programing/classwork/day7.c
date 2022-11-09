#include<stdio.h>
void main()
{
	int a,b;
	printf("/nEnter the value of A:");
	scanf("%d",&a);
	printf("\nEnter the value of B:");
	scanf("%d",&b);
	printf("A=%d and B=%d",a,b);
	if(a>b)
	{
		printf("\nA is greater");
		
	}
	else
	{
		printf("\nB is greater"); 
	}
}