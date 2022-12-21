#include<iostream>
using namespace std;
class scopedemo
{
	public:
		void fun();
		int add( int a, int b);
		int sub( int a, int b);
		int mul(int a, int b);
};
void scopedemo::fun()
{
	cout<<"outside";
}
int scopedemo::add(int a, int b)
{
	return a+b;
}
int scopedemo::sub(int a,int b)
{
	return a-b;
}
int scopedemo::mul(int a,int b)
{
	return a*b;
}
int main()
{
	scopedemo sd;
	sd.fun();
	int a,b;
	cout<<"\nenter A:";
	cin>>a;
	cout<<"\nemter B:";
	cin>>b;
	cout<<"add:"<<sd.add(a,b);
	cout<<"sub:"<<sd.sub(a,b);
	cout<<"mul:"<<sd.mul(a,b);
	return 0;
}