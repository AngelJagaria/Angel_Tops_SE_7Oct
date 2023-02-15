#include<iostream>
using namespace std;
class information
{
	public:
		information(string name, string address, int age)
		{
			cout<<"your name is:"<<name;
			cout<<"your address is:"<<address;
			cout<<"your age is:"<<age;
		}
	
};
int main()
{
	string name;
	string address;
	int age;
	cout<<"your name is"<<name;
	cout<<"your address is "<<address;
	cout<<"your age is"<<age;
	information obj1(name,address,age);
	return 0;
}