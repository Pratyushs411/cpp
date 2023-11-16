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
bool searchInBST(node* &root, int x) {
     if(root == NULL)
    {
        return false;
    }
    if(root->data == x)
    {
        return true;
    }
    if(x>root->data)
    {
     searchInBST(root->right,x);
    }
    else{
        searchInBST(root->left,x);
    }
}
int main()
{
	node* root = NULL;
	takeInput(root);
	cout<<"BST:"<<endl;
	levelOrderTraversal(root);
	int n;
	cout<<"enter the element to search:";
	cin>>n;
	if(searchInBST(root, n)){
		cout<<"present"<<endl;
	}
	else{
		cout<<"absent"<<endl;
	}
	return 0;
}
