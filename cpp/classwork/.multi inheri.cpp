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
			cout<<"\tvalue of A is:"<<a;
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
		cout<<"\tValue of B is :"<<b;
		
	}
	
		
};
class C : public B
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
			cout<<"\tValue of C is :"<<c;
		}
};
int main()
{
	C obj1;
	obj1.getA();
	obj1.getB();
	obj1.getC();
	obj1.showA();
	obj1.showB();
	obj1.showC();
	return 0;
	
	
}
