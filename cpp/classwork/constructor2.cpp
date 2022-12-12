#include<iostream>
using namespace std;
class sample
{
	public:
		sample()
		{
			cout<<"Default constructor called.";
			
		}
		sample(string fnme,string lname,int age)
		{
			cout<<"\nparameterized constroctor called.";
			cout<<"\n name:"<<fnme;
			cout<<"\n lname:"<<lname;
			cout<<"\n age:"<<age;
			
		}
		
	
};
int main()
{
	sample obj1,obj2("angel","jagaria",15);
	return 0;
}