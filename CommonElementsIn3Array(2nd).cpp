#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> A = {1, 5, 10, 20, 40, 80};
	vector<int> B = {6, 7, 20, 80, 100};
	vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};
	int i=0,j=0,k=0;
	while(i<A.size() && j<B.size() && k<C.size())
	{
		if(A[i]==B[j] && B[j]==C[k])
		{
			cout<<A[i];
			i++;j++;k++;
		}
		else if(A[i]<B[j])
			i++;
		else if(B[j]<C[k])
			j++;
		else
			k++;
	}
	return 0;
}