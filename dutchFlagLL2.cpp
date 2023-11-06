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
void populate(node* &tail,node* curr)
{
	tail->next = curr;
	tail = curr;
}
void dutchFlag(node* &head)
{
  node* zeroHead = new node(-1);
  node* zeroTail = zeroHead;
  node* oneHead = new node(-1);
  node* oneTail = oneHead;
  node* twoHead = new node(-1);
  node* twoTail = twoHead;
  node* curr = head;
  
  while(curr!=NULL)
  {
  	int val = curr->data;
  	if(val == 0)
  	{
  		populate(zeroTail,curr);
	  }
	  else if(val == 1)
  	{
  		populate(oneTail,curr);
	  }
	  else if(val == 2)
	  {
	  	populate(twoTail,curr);
	  }
	  curr = curr->next;
  }
    if(oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
	//setup head 
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
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
