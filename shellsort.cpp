#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v={32,12,14,25,17,4,3,2,1};
	int i,j,dis=v.size()/2;
	while(dis>=1)
	{
		i=0;j=i+dis;
		while(j<v.size())
		{
			
			if(v[i]>v[j])
			{
				swap(v[i],v[j]);
				if(i>=dis)
				{
					if(v[i]<v[i-dis])
						swap(v[i],v[i-dis]);
				}
			}
			i++;j++;
		}
		dis/=2;
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	return 0;
}