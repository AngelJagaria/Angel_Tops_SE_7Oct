#include<iostream>
using namespace std;
class Angel
{
	public:
		void angel(string name, string address, int age)
		{
			cout<<" \nEnter your name:"<<name;
			cout<<"\n enter your address"<<address;
			cout<<"\n enter your age"<<age;
		}
~ angel()
{
	cout<<"destructor called";
		}		
};
int main()
{
	string name, string address;
	int age;
	cout<<"your name is ";
	cin>>name;
	cout<<"your address is";
	cin>>address;
	cout<<"your age is ";
	cin>>age;
	angel obj1(name,address,age)
	return 0;
}
