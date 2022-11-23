#include<stdio.h>
void main()
{
	 char firstname[10]="angel";
	 char lastname[10]="jagaria";
	 printf("\nstring length : %d",strlen(firstname));
	 //printf("\nstring reverse : %s",strrev(lastname));
	 printf("\nstring concate:%s",strcat(firstname,lastname));
	 printf("\nstring upper case: %s", strupr(firstname));
	 printf("\nstring Lowercase:%s",strlwr(firstname));
}