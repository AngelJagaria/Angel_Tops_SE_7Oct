#include<iostream>
using namespace std;
class A
{
	public:
		void msg1()
		{
			cout<<"\nhello from A";
			
		}
		
};
class B: public A
{
	
	public:
	void msg2()
	{
		cout<<"\nhello from B";
		
	}
};
class c : public A
{
	public:
		
			void msg3()
			{
			
			cout<<"\nhello from c";
		}
		
};
int main()
{
	B obj1;
	obj1.msg1();
	obj1.msg2();
	c obj2;
	obj2.msg1();
	obj2.msg3();
	return 0;
}