#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;
class node{
	public:
		int data;
		node *link;
		node(int d)
		{
			this->data=d;
			this->link=NULL;
		}
};
void insertAtHead(node* &head,int d)
{
	node *temp = new node(d);
	temp->link = head;
	head=temp;
}
void insertAtTail(node* &tail,int d)
{
	node* temp = new node(d);
	tail->link = temp;
	tail = tail->link;
}
void insertInMiddle(node* &head,node* &tail,int position,int d)
{
	if(position==1)
	{
		insertAtHead(head,d);
		return;
	}
	node* temp=head;
	int count=1;
	node* ans = new node(d);
	while(count<position-1)
	{
		temp=temp->link;
		count++;
	}
	if(temp->link==NULL)
	{
	insertAtTail(tail,d);
	return;
	}
	ans->link=temp->link;
	temp->link=ans;
}
void deleteElement(node* &head,int position)
{
	node *temp=head;
	int count=1;
	while(count<position-1)
	{
		temp=temp->link;
		count++;
}
 temp->link=temp->link->link;
}
void print(node* &head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->link;
	}
	cout<<endl;
}
int main()
{
    node *node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,11);
    print(head);
    insertAtTail(tail,15);
    print(head);
     insertAtTail(tail,20);
    print(head);
    insertInMiddle(head,tail,3,9);
    print(head);
    insertInMiddle(head,tail,4,32);
    print(head);
    insertInMiddle(head,tail,1,16);
    print(head);
    insertInMiddle(head,tail,9,21);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    deleteElement(head,3);
    print(head);
	return 0;
}
