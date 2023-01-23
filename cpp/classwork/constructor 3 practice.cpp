#include<iostream>
using namespace std;
class angel
{
	public:
		angel(int a,int b)
		{
			cout<<"\nenter A:"<<a;
			cout<<"\nenter B:"<<b;
		}
		~angel()
		{
			cout<<" \ndestructor called";
		}
};
int main()
{

int a,b;
cout<<"\n enter A:";
cin>>a;
cout<<"\nenter B:";
cin>>b;
angel obj1(a,b);
return 0;
}