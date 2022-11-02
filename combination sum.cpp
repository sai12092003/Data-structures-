#include<bits/stdc++.h>
using namespace std;

void sub(int idx,vector<int> &ds,vector<vector<int>> &ans,vector<int> arr,int t)
{
    if(idx==arr.size())
    {
        if(t==0)
        {
            ans.push_back(ds);
            
        }
        return ;
    }
    if(arr[idx]<=t)
    {
        ds.push_back(arr[idx]);
        sub(idx,ds,ans,arr,t-arr[idx]);
        ds.pop_back();
    }
    sub(idx+1,ds,ans,arr,t);
}

int main()
{
    vector<int> arr={2,3,6,5,7};
    int target=7;
    vector<vector<int>> ans;
    vector<int> ds;
    
    sub(0,ds,ans,arr,target);
    
    for(auto x:ans)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
       
    return 0;
}
