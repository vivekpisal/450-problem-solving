#include<iostream>
#include<vector>
#include<map>
#include<iterator>

using namespace std; 
class parent
{
public:
	int x,y;
	int *p;
	parent(int x,int y,int z)
	{
		this->x=x;
		this->y=y;
		p=new int;
		*p=z;
	}
	void showdata()
	{
		cout<<x<<" "<<y<<" "<<&p<<" ";
	}
	parent(parent &pd)
	{
		x=pd.x;
		y=pd.y;
		p=new int;
		*p=*(pd.p);
	}
};
int main()
{
	parent p(10,20,5);
	parent p1=p;
	p.showdata();
	p1.showdata();
	return 0;
}
