#include<iostream>
#include<vector>
using namespace std;
void subsequence(string str,string a,vector<string> &ans)
{
	if(str.length() == 0)
		{ans.push_back(a);
		return;
	}
	subsequence(str.substr(1),a+str[0],ans);
	subsequence(str.substr(1),a,ans);
}
int main()
{
	string s="abc";
	vector<string> ans;
	subsequence(s,"",ans);
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<endl;
	return 0;
}