#include<iostream>
using namespace std;

class bank 
{
	public:
			int a;
			int b;
		void deposit()
		{
			cout<<"Enter the Deposit amount : ";
			cin>>a;
		}	
		
		void withdrawal()
		{
			cout<<"Enter the Withdrawal amount : ";
			cin>>b;
		}
};

class balance : public bank
{
	public:
			void balancee()
			{
				if(b<=a)
				{
					cout<<"Balance : "<<a-b;
				}
				else
				{
					cout<<"insufficient";
				}
				
				
				
				
				
			}	
};


int main()
{
	balance obj;
	obj.deposit();
	obj.withdrawal();
	obj.balancee();
	return 0;
}