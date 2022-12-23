#include<iostream>
using namespace std;
class sample
{
	public:
		  int a; 
		 {
		 	cout<<"constroctor called";
		 	a++
			 }    
		
		
};
int sample::a=0;
int main()
{
	sample s1,s2;
	cout<<"\n no of constr:"<<s1.a;
	return 0;
}