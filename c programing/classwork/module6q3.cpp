#include<iostream>
using namespace std;
class interest
{
	public:
		interest(int principal,int year,float rate)
	{
		
		cout<<"\n the principal is:"<<principal;
		cout<<"\n the time is:"<<year;
		cout<<"\n the rate is:"<<rate;
	 cout<<"\n the simple interest is:"<<principal*year*rate/100;
	}
		
		 
		
	
};
int main()
{
	int principal;
	int year;
	float rate;
	cout<<"\n principal:";
	cin>>principal;
	cout<<"\n time:";
	cin>>year;
	cout<<"\n rate of interest:";
	cin>>rate;
	cout<<"\n the simple interest is:"<<principal*year*rate/100;
	interest obj1(int principal,int year, int rate);
	return 0;
	
}