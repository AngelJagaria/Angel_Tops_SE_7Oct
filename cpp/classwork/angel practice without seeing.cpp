#include<iostream>
using namespace std;
class information
{
	public:
		string name;
		int age;
		void getname()
		{
			cout<<"Enter your name:";
			getline(cin,name);
			cout<<"Enter your age :";
			cin>>age;
		}
		void showname()
		{
			cout<<"Your name is:"<<name;
			cout<<"Your age is:"<<age;
			
		}
};
int main()
{
	information angel;
	angel.getname();
	angel.showname();
	return 0;
}