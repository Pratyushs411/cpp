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
void reverse(node* &head,node* & tail)
	{
	node* pre = NULL;
	node* curr = head;
	node* forward;
	tail = curr;
	while(curr!=NULL){
		forward = curr->next;
		curr->next = pre;
		head = curr;
		pre = curr;
		curr = forward;	
	}	
	}
int main()
{
	node *node1 = new node(1);
    node* head = node1;
    node* tail = node1;
    insertAtTail(tail,2);
     insertAtTail(tail,3);
     insertAtTail(tail,4);
     printList(head);
     reverse(head,tail);
     printList(head);
     insertAtHead(head , 5);
     insertAtHead(head , 6);
     insertAtTail(tail,7);
      printList(head);
    reverse(head,tail);
     printList(head);
	return 0;
}
