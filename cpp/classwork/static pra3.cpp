#include<iostream>
using namespace std;
class sample
{
	public:
		static int a;
		sample()
		{
			cout<<"\n constructor called";
			a++;
		}
};
int sample::a=0;
int main()
{
	sample s1,s2;
	cout<<"\n no. of constructor called"<<s1.a;
	
	return 0;
}