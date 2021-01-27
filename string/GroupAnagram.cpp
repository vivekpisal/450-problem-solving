#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<int> v(strs.size(),0);
        vector<vector<string>> main_anagram;
        for(int i=0;i<strs.size();i++)
        {
            if(v[i] == 0)
            {
                vector<string> anagram;
                anagram.push_back(strs[i]);
                v[i]=1;
                map<char,int> strsmap;
                for(int k=0;k<strs[i].size();k++)
                {
                    if(strsmap[strs[i][k]])
                        strsmap[strs[i][k]]++;
                    else
                        strsmap[strs[i][k]]=1;
                }
                for(int j=i+1;j<strs.size();j++)
                {
                    map<char,int> temp;
                    for(int k=0;k<strs[j].size();k++)
                    {
                        if(temp[strs[j][k]])
                            temp[strs[j][k]]++;
                        else
                            temp[strs[j][k]]=1;
                    }
                    if(temp == strsmap)
                    {
                        anagram.push_back(strs[j]);
                         v[j]=1; 
                    }
                }
                main_anagram.push_back(anagram);
            }
        }
        return main_anagram;
}

int main()
{
	vector<string> nums={"eat","tea","tan","ate","nat","bat"};
	vector<vector<string>> ans;
	ans=groupAnagrams(nums);
	return 0;
}