#include<iostream>
using namespace std;
class information
{
	public:
		string name;
		int age;
		void getname()
		{
			cout<<"Enter name :";
			getline(cin,name);
			cout<<"Enter age:";
			cin>>age;
		}
		void showname()
		{
			cout<<"Your name :"<<name;
			cout<<"Your age :"<<age;
		}
};
		int main()
		{
			information obj1;
			obj1.getname();
			obj1.showname();
			return 0;
		}
