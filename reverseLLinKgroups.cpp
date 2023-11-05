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

int main()
{
	node *node1 = new node(1);
    node* head = node1;
    node* tail = node1;
    int k;
    insertAtTail(tail,2);
     insertAtTail(tail,3);
     insertAtTail(tail,4);
     insertAtTail(tail , 5);
     //insertAtHead(head , 6);
     //insertAtTail(tail,7);
      printList(head);
    cin>>k;
    node* head1 = reverseInGroups(head,k);
    printList(head1);
	return 0;
}
