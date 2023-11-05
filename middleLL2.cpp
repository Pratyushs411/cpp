#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int d)
		{
			this->data = d;
			this->next = NULL;
		}
};
void insertAtHead(node* &head,int d)
{
	node* temp = new node(d);
	temp->next = head;
	head = temp;
}
void insertAtTail(node* &tail,int d)
{
	node* temp = new node(d);
	tail->next = temp;
	tail = tail->next;
	temp = NULL;
}
void insert(node* &head,node* &tail,int d,int index)
{
	if(index==1){
		insertAtHead(head,d);
		return ;
	}
	node* temp = head;
	int count = 1;
	while(count<index-1){
		temp = temp->next;
		count++;
	}
	node* t = new node(d);
	if(temp->next==NULL)
	{
	insertAtTail(tail,d);
	return;
	}
	t->next=temp->next;
	temp->next = t;
	}
void deleteElement(node* &head,int index)
	{
		int count = 1;
		node* temp = head;
		while(count<index-1)
		{
			temp = temp->next;
			count++;
		}
		temp->next = temp->next->next;
	}
	void printList(node* &head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
	void middle(node* head)
	{
		node* temp1 = head;
		node* temp2 = head;
		while(temp1 != NULL && temp1->next != NULL)
		{
			temp1 = temp1->next->next;
			temp2 = temp2->next;
		} 
		
		cout<<temp2->data<<endl;
	}
int main()
{
	node *node1 = new node(1);
    node* head = node1;
    node* tail = node1;
    insertAtTail(tail,2);
     insertAtTail(tail,3);
     insertAtTail(tail,4);
     insertAtTail(tail,5);
     insertAtTail(tail,6);
     insertAtTail(tail,7);
     printList(head);
      middle(head);
      insertAtTail(tail,8);
     printList(head);
      middle(head);
	return 0;
}
