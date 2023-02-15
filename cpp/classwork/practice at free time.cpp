#include<iostream>
using namespace std;
class information
{
	public:
		 information(string name,string address,string schoolname, int age int roll no)
		{
			cout<<"\nname"<<name;
			cout<<"\naddress"<<address;
			cout<<"\nschool name"<<school name;
			cout<<"\nage"<<age
			cout<<"\nroll no"<<roll no;
		}
		~information()
		{
			cout<<"\n destructor called"
			
		}
};
int main()
{
	string name, string address, string school name;
	int age;
	int roll no;
	cout<<"name";
	cin>>name;
	cout<<"address";
	cin>>address;
	cout<<"school name";
	cin>>school name;
	cout<<"age";
	cin>>age;
	cout<<"roll no";
	cin>>roll no;
	information obj(name,address,school name,age,roll no)
	return 0;
}