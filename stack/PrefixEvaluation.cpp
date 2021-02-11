#include<bits/stdc++.h>
using namespace std;
int prefixEvaluation(string s)
{
	stack<char> st;
	int i = s.size()-1;
	int ans = 0;
	while(i>=0)
	{
		if(s[i]>='0' && s[i]<='9')
			st.push(s[i]-'0');
		else if(s[i] == '+')
		{
			int first = st.top();
			st.pop();
			int second = st.top();
			st.pop();
			ans = first + second;
			st.push(ans);
		}
		else if(s[i] == '-')
		{
			int first = st.top();
			st.pop();
			int second = st.top();
			st.pop();
			ans = first - second;
			st.push(ans);
		}
		else if(s[i] == '*')
		{
			int first = st.top();
			st.pop();
			int second = st.top();
			st.pop();
			ans = first * second;
			st.push(ans);
		}
		else if(s[i] == '/')
		{
			int first = st.top();
			st.pop();
			int second = st.top();
			st.pop();
			ans = first / second;
			st.push(ans);
		}
		else if(s[i] == '^')
		{
			int first = st.top();
			st.pop();
			int second = st.top();
			st.pop();
			ans = pow(first,second);
			st.push(ans);
		}
		i--;
	}
	return ans;
}
int main()
{
	string pre = "+*423";
	int ans = prefixEvaluation(pre);
	cout<<ans;
	return 0;
}