#include<bits/stdc++.h>
using namespace std;

void sub(int idx,vector<int> &ds,int s,int sum,int arr[],int n)
{
    if(idx==n)
    {
        if(s==sum)
        {
            for(auto x:ds)cout<<x<<" ";
            cout<<endl;
            
        }
        return;
    }
    ds.push_back(arr[idx]);
    s+=arr[idx];
    
    sub(idx+1,ds,s,sum,arr,n);
    
    s-=arr[idx];
    ds.pop_back();
    
    sub(idx+1,ds,s,sum,arr,n);
}

int main()
{
    int arr[]={1,2,1,5,3};
    int n=5;
    vector<int> ds;
    int sum=8;
    sub(0,ds,0,sum,arr,n);
    return 0;
}
