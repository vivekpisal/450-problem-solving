#include<bits/stdc++.h>
using namespace std;

class FirstUnique{
public:
	vector<int> a;
	int front=0;
	map<int,int> m;
	void FU()
	{
		while(m[a[front]]!=1)
			front++;
		cout<<"First Unique :- "<<a[front]<<endl;
	}
	void add(int data)
	{
		a.push_back(data);
		if(m[data])
				m[data]++;
			else
				m[data]=1;
	}
	FirstUnique(vector<int> temp)
	{
		a = temp;
		for(int i:a)
		{
			if(m[i])
				m[i]++;
			else
				m[i]=1;
		}
	}
};

int main()
{
	FirstUnique f({1,1,2,3,4});
	int n,value;
	while(1)
	{
		cin>>n;
		switch(n)
		{
			case 1: 
			{
				cout<<"Enter value:-";
				cin>>value;
				f.add(value);
				break;
			}
			case 2:{
				f.FU();
				break;
			}
		}
	}
	return 0;
}