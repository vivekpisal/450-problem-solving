#include<iostream>
using namespace std;
class Twostack{
public:
	int* arr;
	int top1;
	int top2,size;
	Twostack(int n)
	{
		arr=new int[n];
		size=n;
		top1=0;
		top2=n;
	}
	void push1(int data)
	{
		if(top1<top2-1)
			arr[++top1]=data;
		else
			cout<<"Stack overflow 1";
	}
	void push2(int data)
	{
		if(top1<top2-1)
			arr[++top2]=data;
		else
			cout<<"Stack overflow 2";
	}
	int pop1()
	{
		if(top1>=0)
			return arr[top1--];
		else
			exit(1);
	}
	int pop2()
	{
		if(top2<size)
			return arr[top2++];
		else
			exit(1);
	}
};
int main()
{
	Twostack t(10);
	t.push1(10);
	t.push1(20);
	t.push1(30);
	t.push1(40);
	t.push1(50);

	t.push2(100);
	t.push2(90);
	t.push2(80);
	t.push2(70);
	t.push2(60);
	cout<<t.pop1();
	cout<<t.pop1();

	return 0;
}