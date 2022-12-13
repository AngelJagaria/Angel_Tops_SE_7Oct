#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void getA()
		{
			cout<<"Enter the value of A:";
			cin>>a;
		}
		void showA()
		{
			cout<<"value of A is:"<<a;
		}
	
};
class B: public A
{
public:
	int b;
	void getB()
	{
		cout<<"Enter the value of B:";
		cin>>b;
		
	}
	void showB()
	{
		cout<<"Value of B is :"<<b;
		
	}
	
		
};
class C : public C
{
	public:
		int c;
		void getC()
		{
			cout<<"Enter the value of C:";
			cin>>c;
			
		}
		void showC()
		{
			cout<<"Value of C is :"<<c;
		}
};
int main()
{
	Cobj
}
