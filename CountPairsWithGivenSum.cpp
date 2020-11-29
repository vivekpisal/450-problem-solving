#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
int main()
{
 	vector<int> v={1, 5, 7, 1};
 	int sum=6;
 	//FIRST APPROACH
 	/*for(int i=0;i<v.size();i++)
 	{
 		for(int j=i+1;j<v.size();j++)
 		{
 			if(v[i]+v[j]==sum)
 				cout<<v[i]<<" "<<v[j]<<endl;
 		}
 	}*/
 	//SECOND APPROACH
 	/*set<pair<int,int>> m;
 	for(int i=0;i<v.size();i++)
 		m.insert({v[i],count(v.begin(),v.end(),v[i])});
 	for(auto i:m)
 	{
 		int ser=sum-i.first;
 		if(binary_search(v.begin(),v.end(),ser))
 			cout<<ser<<" "<<i.first;
 	}*/
 	//THIRD APPROACH
 	map<int,int> m;
 	for(int i=0;i<v.size();i++)
 	{
 		if(m[v[i]])
 			m[v[i]]+=1;
 		else m[v[i]]=1;
 	}
 	for(auto i:v)
 	{
 		int ser=sum-i;
 		if(m[ser])
 		{
 			cout<<ser<<" "<<i<<endl;
 		}
 	}
	return 0;
}