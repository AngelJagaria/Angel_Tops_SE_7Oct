#include<iostream>
using namespace std;
class MOdemo
{
	public:
		void add()
		{
			int a=10,b=54;
			cout<<"addition:"<<(a+b);
			
		}
		int add(int a, int b)
		{
			return a+b;
		}
};
int main()
{
	MOdemo obj1;  
	obj1.add();
	int n1,n2;
	cout<<"\nEnter N1 N2";
	cin>>n1>>n2;
	cout<<obj1.add(n1,n2);
	return 0;
}