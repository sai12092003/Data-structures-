#include<iostream>
using namespace std;

void ms(int arr[],int s,int mid,int e)
{
	int n1= mid-s+1;
	int n2=e-mid;
	
	int a[n1],b[n2];
	//first half
	for(int i=0;i<n1;i++)
	{
		a[i]=arr[s+i];
	}
	//sec half
	for(int i=0;i<n2;i++)
	{
		b[i]=arr[mid+1+i];
	}
	
	
	int i=0,j=0,k=s;
	
	while(i<n1&&j<n2)
	{
		if(a[i]<b[j])
		{
			arr[k]=a[i];
			i++;k++;
		}
		else
		{
			arr[k]=b[j];
			j++;k++;	
		}
	}
	
	
	while(i<n1)
	{
			arr[k]=a[i];
			i++;k++;	
	}
	while(j<n2)
	{
		arr[k]=b[j];
			j++;k++;
	}
	
}
void merge(int arr[],int s,int e)
{
	int mid;
	if(s<e)
	{
		mid=(s+e)/2;
		merge(arr,s,mid);
		merge(arr,mid+1,e);
		
		ms(arr,s,mid,e);
	}
}
int main()
{
	int arr[]={4,6,2,1,7,3};
	merge(arr,0,5);
	
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
}
