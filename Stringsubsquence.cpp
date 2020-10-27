#include<iostream>
using namespace std;

void sub(string input,string output)
{
	if(input.length()==0)
	{
		cout<<output<<endl;
		return;
	}
	sub(input.substr(1),output);
	sub(input.substr(1),output + input[0]);
}
int main()
{
	string input,output="";
	cin>>input;
	sub(input,"");
	return 0;
}