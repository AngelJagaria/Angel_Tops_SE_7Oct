#include<iostream>
using namespace std;
class angel
{
	public:
		angel(string name,string address)
		{
			cout<<"\n your name is:"<<name;
			cout<<"\n your address is:"<<address;
			
		}
};
int main()
{
	string name;
	string address;
	cout<<"name is:";
	cin>>name;
	cout<<"address is:";
	cin>>address;
	angel obj(string name,string address);
}