#include<bits/stdc++.h>
using namespace std;

void sub(int idx,int n,vector<vector<int>> &ans,vector<int> &ds)
{
    if(idx==n)
    {
        ans.push_back(ds);
        return ;
    }
        for(int i=idx;i<n;i++)
       {
            swap(ds[idx],ds[i]);
            sub(idx+1,n,ans,ds);
            swap(ds[idx],ds[i]);
       } 
}

int main()
{
    vector<vector<int>> ans;
    vector<int> ds={1,2,3};
    
    int n=3;
    sub(0,n,ans,ds);
    for(auto x:ans)
    {
        for(auto i:x)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
       
    return 0;
}
