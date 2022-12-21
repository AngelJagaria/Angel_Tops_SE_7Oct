#include<iostream>
using namespace std;
class sample
{
	public:
		static int a;
		sample()
{
	cout<<"\nConstructor called";
	a++;
		}		
};
int sample::a=0;
int main()
{
	sample s1,s2;
	cout<<"\n no. of object :"<<s1.a;
	return 0;
}