#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void getA()
		{
			cout<<"Enter A:";
			cin>>a;
		}
		void showA()
		{
			cout<<"Enter A:"<<a;
			
		}
	
};
class B 
{
	public:
		int b;
		void getB()
		{
			cout<<"Enter B:";
			cin>>b;
			
		}
		void showB()
		{
			cout<<"Value of B is:"<<b;
		}
};
int main()
{
	A obj1; B obj2;
	obj1.getA();
	obj1.showA();
	obj2.getB();
	obj2.showB();
	return 0;
	
}