#pragma once
class ArrayQueue
{
private:
	int front;
	int rear;
	int *_array;
	int size;
	int isEmpty;
public:
	ArrayQueue(int);
	~ArrayQueue();

	void enqueue(int);
	int dequeue();
	void print();
};

