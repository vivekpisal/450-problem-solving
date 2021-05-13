#include<bits/stdc++.h>
using namespace std;

bool equalpartition(vector<int> v,int sum,int n)
{
    if(sum == 0)
        return true;
    if(n == 0)
        return false;
    
    if(v[n-1] > sum)
        return equalpartition(v,sum,n-1);
    
    return equalpartition(v,sum,n-1) || equalpartition(v,sum - v[n-1],n-1);
}


int main()
{
    vector<int> v={1,5,12,5};
    int sum=0;
    for(int i=0;i<v.size();i++)
        sum+=v[i];
    if(sum % 2 == 0)
        {sum=sum/2;
        cout<<equalpartition(v,sum,v.size());}
    else
        cout<<"False";
    return 0;
}