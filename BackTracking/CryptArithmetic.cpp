#include<bits/stdc++.h>
using namespace std;

string findunique(string a)
{
	int m[26];
	string ans="";
	fill_n(m,26,0);
	for(int i=0;i<a.size();i++)
	{
		if(m[a[i]-'a'] == 0)
			{ans+=a[i];m[a[i]-'a']=1;}
	}
	return ans;
}

int getNumber(string a,unordered_map<char,int> charIntMap)
{
	string ans="";
	for(char i:a)
		ans+=to_string(charIntMap[i]);
	int num = stoi(ans);
	return num;
}

void solution(string a,string b,string c,string unique,int idx,unordered_map<char,int> charIntMap,bool taken[])
{
	if(idx == unique.size())
	{
		int num1=getNumber(a,charIntMap);
		int num2=getNumber(b,charIntMap);
		int num3=getNumber(c,charIntMap);
		if(num1 + num2 == num3)
			{cout<<"found";}
		return;
	}
	for(int i=0;i<=9;i++)
	{
		if(taken[i] == false)
		{
			charIntMap[unique[idx]]=i;
			taken[i]=true;
			solution(a,b,c,unique,idx+1,charIntMap,taken);
			taken[i]=false;
			charIntMap[unique[idx]]=-1;
		}
	}
}


int main()
{
	string a="send";
	string b="more";
	string c="money";
	string unique=findunique(a+b+c);
	cout<<unique;
	unordered_map<char,int> charIntMap;
	bool taken[26]={false};
	solution(a,b,c,unique,0,charIntMap,taken);
	return 0;
}