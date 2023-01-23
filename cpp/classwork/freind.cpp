#include<iostream>
using namespace std;
class Max
{
	private:
		int money;
		friend int AngelgiveMoney(Max);
		public:
			Max()
			{
				money=0;
				
			}
};
int AngelgiveMoney(Max m)
{
	m.money=5000;
	return m.money;
	
}
int main()
{
	Max m;
	cout<<"Angel has given"<<AngelgiveMoney(m)<<"to Max";
	return 0;
}