#include<iostream>
using namespace std;
class bank
{
	protected:
		int a;
		int b;
		public:
			void put(int a,int b)
			{
				this->a=a;
				this->b=b;
			}
};
class deposite:bank
{
	public:
};