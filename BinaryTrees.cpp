#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
		int data;
		node* right;
		node* left;
		node(int d)
		{
			this->data = d;
			this->left = NULL;
			this->right = NULL;
		}
};
node* buildTree(node* root)
{
	int data;
	cout<<"enter the data:"<<endl;
	cin>>data;
	root = new node(data);
	if(data == -1)
	{
		return NULL;
	}
	cout<<"for inserting left of "<<data<<endl;
	root->left = buildTree(root->left);
	cout<<"for inserting right of "<<data<<endl;
	root->right = buildTree(root->right);
	return root;
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
int main(){
	node* root = NULL;
	root  = buildTree(root);
	levelOrderTraversal(root);
	inOrderTraversal(root);
	cout<<endl;
	preOrderTraversal(root);
	cout<<endl;
	postOrderTraversal(root);
	return 0;
}
