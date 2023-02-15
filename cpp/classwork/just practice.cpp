#include<iostream>
using namespace std;
class angel
{
	public:
		angel(string name, string address, int age)
		{
			cout<<"\nenter your name "<<name;
			cout<<"\nenter your address"<<address;
			cout<<"\nenter your age "<<age ;
			
		}
		~angel()
		{
			cout<<"\ndestructor called";
		}
};
int main()
{
	string name,address;
	int age;
	cout<<"your name is";
	cin>>name;
	cout<<"your address id";
	cin>>address;
	cout<<"your age is";
	cin>>age;
	angel obj1(name,address,age);
	return 0;
	

}
