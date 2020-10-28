#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	vector<int> v={1 ,3, 5, 8, 9 ,2 ,6 ,7 ,6, 8, 9};
	int count=0;
	bool f=false;
	for(int i=0;i<v.size()-1;i=i+v[i])
	{
		if(v[i]==0)
		{
			cout<<"-1";
			f=false;
			break;
		}
		else
			f=true;
		count++;
	}
	if(f==true)
		cout<<"the no of jump is"<<count<<endl;
	return 0;
}