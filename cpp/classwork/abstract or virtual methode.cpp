#include<iostream>
using namespace std;
class sample
{
public:
void d1()
{
	cout<<"\nnon virtual methode";
	
	
}
virtual void d2();	
};
class demo: public sample
{
	public:
		void d2()
		{
			cout<<"\npure virtual methode";
		}
};
int main ()
{
	demo d;
	d.d1();
	d.d2();
	return 0;
}