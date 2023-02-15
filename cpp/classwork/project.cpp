#include<iostream>
using namespace std;
class information
{
public:
information(string name, string address, int age, int rollno,int std)
{
	cout<<"your name is:"<<name;
	cout<<"your address is:"<<address;
	cout<<"your age is:"<<age;
	cout<<"your roll no. id:"<<rollno;
	cout<<"your standard is:"<<std;
}
~information()
{
	cout<<"distructor called";
}
};
int main()
{
	string name;
	string address;
	int age;
	int rollno;
	int std;
	cout<<"enter your name:";
	cin>>name;
	cout<<"enter your address:";
	cin>>address;
	cout<<"enter your age:";
	cin>>age;
	cout<<"enter your roll no.:";
	cin>>rollno;
	cout<<"enter your standard:";
	cin>>std;
	information obj1(name,address,age,rollno,std);
	return 0;
}