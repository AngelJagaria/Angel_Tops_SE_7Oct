#include<iostream>
using namespace std;
class a
{
	public:
		void msg1()
		{
			cout<<"hi from a";
		}
};
class b
{
	public:
		void msg2()
		{
			cout<<"hi from b";
		}
};
class c:public a,b
{
	public:
		void msg3()
		{
			cout<<"hi from c";
		}
};
int main()
{
	c obj1;
	obj1.msg1();
	obj1.msg2();
	obj1.msg3();
	return 0;
}