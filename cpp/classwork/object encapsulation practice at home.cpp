#include<iostream>
using namespace std;
class information
{
	public:
	string name;
	int age;
	int rollno;
	string address;
void getname()
{
	cout<<"Enter your name";
	getline(cin,name);
	cout<<"Enter your age";
	cin>>age;
	cout<<"Enter your rollno:";
	cin>>rollno;
	cout<<"Enter your address:";
	getline(cin,address);
}
void showname()
{
	cout<<"\n your name:"<<name;
	cout<<"\n your age:"<<age;
	cout<<" \n your rollno:"<<rollno;
	cout<<"\n your address:"<<address;
}
	
};
int main()
{
	information angel;
	angel.getname();
	angel.showname();
	return 0;
}