#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node* pre;
		node(int d)
		{
			this->data=d;
			this->next=NULL;
			this->pre=NULL;
		}
};
void insertAtHead(node* &head,int d)
{
	node* temp = new node(d);
	temp->next = head;
	head->pre = temp;
	head = temp;
}
void insertAtTail(node* &tail,int d)
{
	node* temp = new node(d);
	tail->next = temp;
	temp->pre = tail;
	tail = temp;
}
void insert(node* &head,node* &tail,int index,int d)
{
	if(index==1)
	{
		insertAtHead(head,d);
		return;
	}
	node* temp = head;
	int count = 1;
	while(count<index-1)
	{
		count++;
		temp = temp->next;
	}
	if(temp->next==NULL)
	{
		insertAtTail(tail,d);
		return;
	}
	node* ans = new node(d);
	ans->next = temp->next;
	temp->next->pre = ans;
	temp->next = ans;
	ans->pre = temp;
}
void deleteElement(node* &head,int index)
{
	node* temp = head;
	int count = 1;
	while(count<index-1)
	{
		count++;
		temp = temp->next;
	}
	temp->next = temp->next->next;
	temp->next->next->pre=temp;
}
void length(node* &head)
{
	int count=0;
	node* temp = head;
	while(temp!=NULL)
	{
		count++;
		temp = temp->next;
	}
	cout<<count<<endl;
}
void print(node* &head)
{
	node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main()
{
	node* node1 = new node(5);
	node* head=node1;
	node* tail=node1;
	print(head);
	length(head);
	insertAtHead(head,10);
	print(head);
	length(head);
	insertAtTail(tail,15);
	print(head);
	length(head);
	insertAtTail(tail,20);
	print(head);
	length(head);
	insert(head,tail,3,25);
	print(head);
	length(head);
	insert(head,tail,6,30);
	print(head);
	cout<<tail->next<<endl;
	length(head);
	deleteElement(head,4);
	print(head);
	length(head);
	return 0;
}
