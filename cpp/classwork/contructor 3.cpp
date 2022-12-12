#include<iostream>
using namespace std;
class sample
{
	public:
		sample(string fname,string lname, int age)
		{
			cout<<"\n name:"<<fname;
			cout<<"\n lname:"<<lname;
			cout<<" \n age:"<<age;
			
		}
		~sample()
		{
			cout<<"\nDestructor called.";
		}
	
};
int main()
{

string fname,lname;
int age;
cout<<"\nEnter name :";
cin>>fname;
cout<<"\n enter lname:";
cin>>lname;
cout<<"\n enter age";
cin>>age;
sample obj1(fname,lname,age);
return 0;
}