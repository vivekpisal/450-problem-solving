#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;
int sum(vector<int> a,int k)
{
	int sum=0,j=k;
	for(int i=0;i<k;i++)
	{
		sum+=pow(a[i]*10,j--);
	}
	return sum;
}
int main()
{
	vector<vector<int>> mat={{1,0,1},{1,1,0},{0,1,1}};
	bool f=true;
	int k=mat[0].size();
	for(int i=0;i<2;i++)
	{
		map<int,int> m;
		for(int j=0;j<mat.size();j++)
		{
			int hash=sum(mat[j],k);
			m[hash]+=1;
			cout<<j<<" "<<k<<" "<<hash<<endl;
			if(m[hash]==2)
			{
				f=false;
				cout<<"NO";
				break;
			}
		}
		k--;
		if(!f)
			break;
	}
	if(f)
		cout<<"YES";
	return 0;
}