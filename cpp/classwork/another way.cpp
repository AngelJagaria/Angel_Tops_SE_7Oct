#include<iostream>
using namespace std;
class bank
{
	public:
		int a=10000;
		int b=20000;
		void msg1()
		{
			cout<<"enter the value of a"<<a;
			cout<<"enter the value of b"<<b;
		}
		
};
class deposite:public bank 
{
	public :
		void msg2()
		{
			cout<<"deposite is :";
			
		}
};
class balance :public bank
{
	public:
		void msg3()
		{
			cout<<" the check balance is :";
		}
};
int main()
{
	bank obj1;
	obj1.msg1();
	obj1.a;
	
	obj1.b;
	balance obj2;
	obj2.msg3();
	obj2.msg1();
	return 0;
}