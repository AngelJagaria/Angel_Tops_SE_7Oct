#include<iostream>
using namespace std;
int main()
{
	string name;
	string address;
	int age;
	cout<<"Enter your name:";
	getline(cin,name);
	cout<<"Enter yo0ur address:";
	getline(cin,address);
	cout<<"Enter ypur age :";
	cin>>age;
	
	cout<<"\nyour name is"<<name;
	cout<<"\nYour address is"<<address;
	cout<<"\nYour age is"<<age;
	return 0;
}