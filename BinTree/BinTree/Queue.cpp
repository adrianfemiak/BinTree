

#include "Queue.h"
#include <iostream>

using namespace std;

Node::Node(int data) {
	lchild = nullptr;
	this->data = data;
	rchild = nullptr;
}

void Queue::enqueue(Node* x) 
{
	if (rear == size - 1)
		cout << "Queue Full" << endl;
	else
	{
		rear++;
		Q[rear] = x;
	}
}
Node* Queue::dequeue()
{
	Node* x = NULL;
	if (front == rear)
		cout << "Queue is Empty" << endl;
	else
	{
		x = Q[front+1];
		front++;
	}
	return x;
}

void Queue::display()
{
	for (int i = front + 1; i <= rear; i++)
		cout << Q[i] << endl;

}

bool Queue::isEmpty()
{
	return front==rear;
}
