#include<iostream>
#include<vector>
using namespace std;
int main()
{	
	vector<int> arr={1,2,3,-4,1,4,3};
	int sum=0,max=0,k=4;
	for(int i=0;i<arr.size();i++)
	{
		sum+=arr[i];
		if(i>=(k-1))
		{	if(sum>max)
				max=sum;
			sum-=arr[i-(k-1)];}
	}
	cout<<max<<endl;
	return 0;
}