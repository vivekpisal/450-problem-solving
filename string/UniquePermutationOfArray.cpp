#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> total;
map< vector <int>, int> map1;
void permutation(vector<int> &nums,int fix)
{
    if(fix == nums.size()-1)
    {
        if(map1.count(nums))
        {}
        else
        {
            total.push_back(nums);
            map1.insert(make_pair(nums,1));
        }
        return;
    }
    for(int i=fix;i<nums.size();i++)
    {
        swap(nums[i],nums[fix]);
        permutation(nums,fix+1);
        swap(nums[i],nums[fix]);
    }
            
}
int main()
{
	vector<int> nums={1,2,3};
    permutation(nums,0);
    for(auto i:total)
    {
    	for(int j:i)
    		cout<<j<<" ";
    	cout<<endl;
    }
    return 0;
}

