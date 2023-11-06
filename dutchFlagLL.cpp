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
node* reverseInGroups(node* &head, int k) {
    if (head == NULL) {
        return NULL;
    }
    node* pre = NULL;
    node* curr = head;
    node* forward;
    int a = 0;
    while (a < k && curr != NULL) {
        forward = curr->next;
        curr->next = pre;
        pre = curr;
        curr = forward;
        a++;
    }
    // Manage head pointer for the reversed group
    if (head != NULL) {
        head->next = reverseInGroups(forward, k);
        head = pre;  // Update the head to the new start of the reversed group
    }
    return pre;
}
void removeDuplicates(node* &head){
	if(head == NULL)
	{
		return;
	} 
	node* temp1 = head;
	while(temp1!=NULL && temp1->next!=NULL)
	{
		if(temp1->data == temp1->next->data)
		{
			temp1->next = temp1->next->next;
			//temp1 = temp1->next;
		}
		else{
			temp1 = temp1->next;
		}
	}

}
void dutchFlag(node* &head)
{
	node* temp1 = head;
	int count0=0;
	int count1=0;
	int count2=0;
	while(temp1!=NULL)
	{
		if(temp1->data == 0)
		{
			count0++;
		}
		if(temp1->data == 1)
		{
			count1++;
		}
		if(temp1->data == 2)
		{
			count2++;
		}
		temp1= temp1->next;
	}
	node* temp2 = head;
	while(count0 != 0)
	{
		temp2->data = 0;
		temp2 = temp2->next;
		count0--;
	}
	while(count1 != 0)
	{
		temp2->data = 1;
		temp2 = temp2->next;
		count1--;
	}
	while(count2 != 0)
	{
		temp2->data = 2;
		temp2 = temp2->next;
		count2--;
	}
}
int main()
{
	node *node1 = new node(1);
    node* head = node1;
    node* tail = node1;
    insertAtTail(tail,0);
    insertAtTail(tail,1);
    insertAtTail(tail,2);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    insertAtTail(tail,0);
    insertAtTail(tail ,0);
    printList(head);
    dutchFlag(head);
    printList(head);
	return 0;
}
