

#ifndef QUEUE_H
#define QUEUE_H

class Node
{
public:
	Node* lchild = 0;
	int data = 0;
	Node* rchild = 0;
	Node() {};
	Node(int data);
};



class Queue
{
private:
	int front;
	int rear;
	int size;
	Node** Q;
public:
	Queue()
	{
		front = rear = -1;
		size = 10;
		Q = new Node*[size];
	}
	Queue(int size)
	{
		front = rear = -1;
		this->size = size;
		Q = new Node * [size];
	}
	void enqueue(Node* x);
	Node* dequeue();
	void display();
	bool isEmpty();

};

#endif