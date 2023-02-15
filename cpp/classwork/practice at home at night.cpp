#include<iostream>
using namespace std;
class angel
{
	public:
		angel(string name,int age,string address)
		{
			cout<<"\nyour name is"<<name;
			cout<<"\nyour age is"<<age;
			cout<<"\nyour address is"<<address;
			
		}
		~angel()
		{
			cout<<"destructor called";
		}
};
int main()
{
	string name;
	int age;
	string address;
	cout<<" your name is";
	cin>>name;
	cout<<"your age is";
	cin>>age;
	cout<<"your address is ";
	cin>>address;
	angel obj(name,age,address);
	return 0;
}