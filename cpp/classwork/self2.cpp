#include<iostream>
using namespace std;
int main()
{
	string name;
    string address;
    int age;
    cout<<"Enter your name:";
    getline(cin,name);
    cout<<"Enter your address:";
    getline(cin,address);
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Your name is:"<<name;
    cout<<"Your address is:"<<address;
    cout<<"Your age is:"<<age;
    return 0;
    
}