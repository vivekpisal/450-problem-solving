#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    int power[q];
    for(int i=0;i<q;i++)
    {
        cin>>power[i];
    }
    for(int i=0;i<q;i++)
    {
        int count=0;
        int powersum=0;
        for(int j=0;j<n;j++)
        {
            if(power[i] >= arr[j])
            {
                count++;
                powersum+=arr[j];
            }
        }
        cout<<count<<" "<<powersum<<endl;
    }
    return 0;
}