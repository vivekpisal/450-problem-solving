#include <iostream>
using namespace std;

int main()
{
	int a[] = {27,29,28,23};
	int k=4;
	int min=a[0],max=a[0],min_index,max_index;
	for(int i=0;i<4;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			max_index=i;
		}
		if(min>a[i])
		{
			min=a[i];
			min_index=i;
		}
	}
	max=max-k;
	min=min+k;
	cout<<max-min<<endl;
	cout<<max<<endl;
	cout<<min<<endl;
	return 0;
}