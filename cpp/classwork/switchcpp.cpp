#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout <<"\nEnter A:";
	cin>>a;
	cout<<"\nEnmter B:";
	cin>>b;
	int choice;
	cout <<"press 1. add\npress 2 for sub";
	cout<<"Enter your choice?";
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"\naddition:"<<(a+b);
		break;
		case 2:cout<<"\n subtraction:"<<(a-b);
		default:
	        cout<<"\nInvalid input";
	        break;
	        
	}
	return 0;
}