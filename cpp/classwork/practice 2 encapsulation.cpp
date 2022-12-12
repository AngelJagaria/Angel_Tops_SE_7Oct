#include<iostream>
using namespace std;
class information
{
	public:
		string name;
		int age;
		int roolno;
		string address;
		void getname()
		{
			cout<<"ENTER YOUR NAME:";
			getline(cin,name);
			cout<<" Enter your age :";
			cin>>age;
			cout<<"Enter your rollno:";
			cin>>roolno;
			cout<<"Enter your address:";
			getline(cin,address);
			
		}
		void showname()
		{
			cout<<"\n your name is:"<<name;
			cout<<"\n your age is:"<<age;
			cout<<"\n your rollno is:"<<roolno;
			cout<<"\n your address is:"<<address;
		}
};
int main()
{
	information angel;
	angel.getname();
	angel.showname();
	return 0;
}