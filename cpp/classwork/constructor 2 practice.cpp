#include<iostream>
using namespace std;
class angel
{
	public:
		angel()
		{
			cout<<"\n default construxtoe called";
		}
		angel(int a, int b, string name)
		{
			cout<<"\n parameterlized called";
			cout<<"\n enter A:"<<a;
			cout<<"\n enter B:"<<b;
			cout<<"\n enter name:"<<name;
			
		}
};
int main()
{
	angel obj1,obj2(12,13,"angel");
	
	return 0;
}