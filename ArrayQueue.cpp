#include "ArrayQueue.h"
#include <iostream>

ArrayQueue::ArrayQueue(int size)
{
	front = 0;
	rear = 0;
	isEmpty = true;
	_array = new int[size];
	this->size = size;
}

ArrayQueue::~ArrayQueue()
{
	delete _array;
}

void ArrayQueue::enqueue(int value)
{
	if (rear % size + 1 == front) return;

	_array[rear] = value;
	rear = rear % size + 1;
	isEmpty = false;
}

int ArrayQueue::dequeue()
{
	int value = _array[front];
	front = front % size + 1;

	if (front == rear)
		isEmpty = true;

	return value;
}

void ArrayQueue::print()
{
	for (size_t i = front; i < rear; i ++) {
		std::cout << _array[i] << std::endl;
	}
}