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
void insertAtTail(node* &tail,int d)
{
	node* temp = new node(d);
	tail->next = temp;
	tail = tail->next;
	temp = NULL;
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
node* reverse(node* head,node*  tail){
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
	
	return head;	
}
node* copy(node* head,node*  tail){
	node* newlist=new node(head->data);
	node*newlisthead=newlist;
	node* current=head->next;
	while(current)
	{	
//		cout<<current->data<<endl;
		node* temp=new node(current->data);
		newlist->next=temp;
		newlist=newlist->next;
		current=current->next;
		temp=NULL;
	}
	return newlisthead;
	
}
	void isPalindrome(node* head,node* tail)
	{
	 //printList(head);	
	 node* temp1 =copy(head,tail);
	 node* temp2 = reverse(head,tail);
     printList(temp2);
     while(temp1!=NULL)
     {	
     	if(temp1->data != temp2->data)
     	{
     		
			cout<<"not a palindrome"<<endl;
     		return;
		}
		temp1 = temp1->next;
		temp2 = temp2->next;		
	 }
	 cout<<"it is a palindrome"<<endl;
	}
int main()
{
	node *node1 = new node(2);
    node* head = node1;
    node* tail = node1;
    insertAtTail(tail,3);
     insertAtTail(tail,3);
     insertAtTail(tail,2);
     insertAtTail(tail,2);
      printList(head);
     isPalindrome(head,tail);
	return 0;
}
