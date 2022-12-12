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
			cout<<"Value of A:"<<a;
			
		}
};
class B:public A
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
			cout<<"\tvalue of B"<<b;
			
		}
};
int main()
{

B obj1;
obj1.getA();
obj1.getB();
obj1.showA();
obj1.showB();
return 0;
}
