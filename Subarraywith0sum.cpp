#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> a={4,2,0,1,6};
	set<int> m;
	int sum;
	for(int i=0;i<a.size();i++)
	{
		sum+=a[i];
		if(sum==0 || m.find(sum)!=m.end())
			{cout<<"yes";
			break;}
		m.insert(sum);
	}
	return 0;
}