#include<iostream>
using namespace std;
class queue{
	public:
		int *arr;
		int size;
		int front;
		int rear;
		queue(int size)
		{
			this->size = size;
			front = 0;
			rear = 0;
			arr = new int[size];
		}
		//function for inserting element
		void enqueue(int d)
		{
			if(rear == size)
			{
				cout<<"QUEUE is full"<<endl;
				return;
			}
			else{
				arr[rear] = d;
				rear++; 
			}
		}
		//function for poping element
		int dequeue()
		{
			if(front == rear)
			{
				cout<<"underflow"<<endl;
				return -1;
			}
			else{
				int a = arr[front];
				front++;
				return a;
			}
		}
		//function for finding front
		void first()
		{
			if(front == rear)
			{
				cout<<"empty queue"<<endl;
			}
			else{
				cout<<"front is "<<arr[front]<<endl;
			}
		}
		void isEmpty()
		{
			if(front == rear)
			{
				cout<<"QUEUE is empty"<<endl;
			}
			else{
				cout<<"QUEUE is not empty"<<endl;
			}
		}
		void print()
		{
			if(front == rear)
			{
				cout<<"No element in queue"<<endl;
				return;
			}
			else{
				for(int i = front;i<rear;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	queue q(5);
	q.print();
	q.enqueue(1);
	q.print();
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.print();
	q.first();
	q.enqueue(6);
	q.dequeue();
	q.print();
	q.first();
	q.isEmpty();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.isEmpty();
	q.print();
	q.dequeue();
	q.isEmpty();
	q.first();
	q.print();
	return 0;
}
