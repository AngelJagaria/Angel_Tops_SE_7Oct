#include<iostream>
using namespace std;
class Address
{
	public:
		string addressline, city,state;
		Address(string addressline, string city,string state)
		{
			this->addressline=addressline;
			this->city;
			this->state;
		}
};
class Employee
{ 
	private:
		Address *address;
		public:
			int id;
			string name;
			Employee(int id, string name,Address*address)
 			{
		 		this->id=id;
				this->name=name;
				this->address=address;
          
			}
			void display()
			{
				cout<<id<<" "<<name<<" "<<
				address->addressline<<" "<<address->city<<" "<<address->state<<endl;
				
			}
};
int main() 
{
	Address a1("C-145,sec-15","noida","UP");
	Employee e1(101,"Nakul",&a1);
	e1.display();
  	return 0;
	
	
}
