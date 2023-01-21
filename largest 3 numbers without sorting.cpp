#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[6]={10,4,3,50,23,90};
    int n=6;
    int f=-1,s=-1,t=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>f)
        {
            t=s;
            s=f;
            f=arr[i];
        }
        else if(arr[i]>s and arr[i]!=f)
        {
            t=s;
            s=arr[i];
        }
        else if(arr[i]>t and arr[i]!=s)
        {
            t=arr[i];
        }
    }
    cout<<f<<" "<<s<<" "<<t;
}
