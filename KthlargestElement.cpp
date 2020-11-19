#include<iostream>
#include<queue>
#include<vector>
using namespace std; 
int main()
{
	priority_queue<int> q;
	int k=3;
	vector<int> v={7, 10, 4, 3, 20, 15};
	for(int i=0;i<v.size();i++)
	{
		q.push(v[i]);
		if(q.size()>=k+1)
			q.pop();
	}
	cout<<q.top();
	return 0;
}