#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s = "abaaba";
	string pat = "aba";
	string total = s + '$' + pat;
	vector<int> z;
	z.push_back(0);
	for(int i=1;i<total.size();i++)
	{
		int count = 0;
		int j=0,k=i;
		while(total[j] == total[k])
		{
			k++;j++;
			count++;
		}
		z.push_back(count);
		count=0;
	}
	for(auto i:z)
		cout<<i<<" ";
	cout<<endl<<z.size();
	return 0;
}