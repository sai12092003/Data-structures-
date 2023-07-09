
#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		this->data-d;
		this->left=NULL;
		this->right=NULL;
	}
};
int calmin(node* root)
{
	if(root->left==NULL or root->right==NULL)
	return 0;
	
	
	int m=INT_MIN;
	m=max(m,root->left->data);
	root->left=calmin(root->left);
	m=max(m,root->right->data);
	root->right=calmin(root->right);
	
	return m;
}

node* buildtree(node* root)
{
	int data;
	cout<<"Enter the data:"<<endl;
	cin>>data;

	root=new node(data);
	if(data==-1)
		return NULL;

	cout<<endl<<"enter the left node of "<<data<<endl;
	root->left=buildtree(root->left);
	cout<<endl<<"Enter the right node of "<<data<<endl;
	root->right=buildtree(root->right);


	return root;
}


int main()
{
	node* root=NULL;
	root=buildtree(root);
	cout<<calmin(root);
	
}






