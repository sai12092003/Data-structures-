#include<bits/stdc++.h>
using namespace std;

void sub(int idx,vector<int> &ds,int arr[],int n)
{
    if(idx==n)
    {
            for(auto x:ds)cout<<x<<" ";
            cout<<endl;
        if(ds.size()==0)cout<<"{}";cout<<endl;
            
        
        return;
    }
    ds.push_back(arr[idx]);
    
    sub(idx+1,ds,arr,n);
    
    ds.pop_back();
    
    sub(idx+1,ds,arr,n);
}

int main()
{
    int arr[]={1,2,1,5,3};
    int n=5;
    vector<int> ds;
    
    sub(0,ds,arr,n);
    return 0;
}
