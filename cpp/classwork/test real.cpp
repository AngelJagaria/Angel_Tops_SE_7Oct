#include<iostream>
using namespace std;
class employee
{
	public:
		employee(string fname,string lname,int age,string address)
		{
			cout<<"\nfirst name"<<fname;
		
			cout<<"\n last name"<<lname;
			cout<<"\n age"<<age;
			cout<<"\n  address"<<address;
		}
		~employee()
		{
			cout<<"\n destructor called";
		}
};
int main()
{
	string fname, lname, address;
	int age;
	cout<<"enter first name ";
	cin>>fname;
	cout<<"enter last name ";
	cin>>lname;
	cout<<"enter age ";
	cin>>age;
	cout<<"enter address ";
	cin>>address;
	employee obj1(fname,lname,age,address);

	return 0;
}