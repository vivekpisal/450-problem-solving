#include<bits/stdc++.h>
using namespace std;

int PostfixEvaluation(string s)
{
	stack<int> st;
	int ans;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='0' && s[i]<='9')
			st.push(s[i]-'0');
		else
		{
			int second = st.top();
			st.pop();
			int first = st.top();
			st.pop();
			switch(s[i])
			{
				case '+':
					ans = first + second;
					st.push(ans);
					break;
				case '*':
					ans = first * second;
					st.push(ans);
					break;
				case '/':
					ans = first / second;
					st.push(ans);
					break;
				case '-':
					ans = first - second;
					st.push(ans);
					break;
				case '^':
					ans = pow(first,second);
					st.push(ans);
					break;
			}
		}
	}
	ans = st.top();
	st.pop();
	return ans;
}

int main()
{
	string s = "46+2/5*+";
	int ans = PostfixEvaluation(s);
	cout<<ans;
	return 0;
}