#include <bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
		node(int d){
			this->data = d;
			this->left = NULL;
			this->right = NULL;
		}
};
node* insertIntoBST(node* root,int d)
{
	if(root==NULL)
	{
		root = new node(d);
		return root;
	}
	if(root->data<d)
	{
		root->right =  insertIntoBST(root->right,d);
	}
	else{
	root->left = insertIntoBST(root->left,d);
	}
}
void levelOrderTraversal(node* root)
{
	 queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();
        if(temp == NULL) { 
            cout << endl;
            if(!q.empty()) { 
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}
void inOrderTraversal(node* root)
{
	if(root==NULL){
		return;
	}
	inOrderTraversal(root->left);
	cout<<root->data<<" ";
	inOrderTraversal(root->right);
}
void preOrderTraversal(node* root){
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}
void postOrderTraversal(node* root){
		if(root==NULL)
	{
		return;
	}
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout<<root->data<<" ";
}
void takeInput(node* &root)
{
	int d;
	cin>>d;
	while(d!=-1)
	{
		root = insertIntoBST(root,d);
		cin>>d;
	}
}
int main()
{
	node* root = NULL;
	takeInput(root);
	cout<<"BST:"<<endl;
	levelOrderTraversal(root);
	cout<<"inorder:"<<endl;
	inOrderTraversal(root);
	cout<<endl;
	cout<<"preorder:"<<endl;
	preOrderTraversal(root);
	cout<<endl;
	cout<<"postorder:"<<endl;
	postOrderTraversal(root);
	return 0;
}
