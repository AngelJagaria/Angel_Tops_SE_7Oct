#include<iostream>
using namespace std;
class side
{
protected:
int length;
public:
void setL(int x)
{
	length = x;
	
	 }	 
};
class square: public side
{
	public:
		int sqr()
		{
			return length*length;
			
		}
};
class cube: public side
{
	public:
		int cub()
		{
			return length*length*length;
		}
};
int main()
{
	square s;
	s.setL(2);
	cout<<"\nSquare is :"<<s.sqr();
	cube c;
	c.setL(9);
	cout<<"\n cube is:"<<c.cub();
	return 0;
}