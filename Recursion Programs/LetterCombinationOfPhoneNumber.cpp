#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
int pos;
void combination( string digits, string temp, map<char,vector<char>> mp)   
{
    if(int(temp[0]) == mp[digits[0]].size())
        return;
    
    int i = int(temp[temp.size()-1]);
    char s = char(temp[temp.size()-1]);
    string tempans = "";
    for(int j=0 ;j < temp.size()-1; j++)
    {
        tempans += mp[digits[j]][temp[j]];
    }
    for(auto i : mp[s])
    {
        tempans += i;
        ans.push_back(tempans);
        tempans.erase(tempans.size()-1);
    }    
}

int main()
{
	string temp="";
	string digits="23";
    for(int i=0;i<digits.size();i++)
        temp+="0";
    map<char,vector<char>> mp;
    int val=97;
    for(int i=2;i<=8;i++)
    {
        mp[char(i)] = {char(val++),char(val++),char(val++)};
    }
    mp['9']={'w','x','y','z'};
    combination(digits,temp,mp);
    for(auto s:ans)
    	cout<<s<<" ";
}