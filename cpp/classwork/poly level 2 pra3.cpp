#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"Show methode of A";
		}
};
class B:public A
{
	public:
		void show()
		{
			cout<<"Shoe methode of B";
		}
};
class C:public B
{
	public:
		void show()
		{
			A::show();
			B::show();
			cout<<"Show methode of C";
		}
};
int main()
{
	A obj2;
	obj2.show();
	B obj3;
	obj3.show();
	C obj1;
	obj1.show();
	return 0;
	
}