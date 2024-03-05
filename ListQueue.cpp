#include "ListQueue.h"
#include <iostream>

ListQueue::ListQueue()
{

}

ListQueue::~ListQueue()
{

}

void ListQueue::enqueue(int value)
{
	_list.push_back(value);
}

int ListQueue::dequeue()
{
	int value = _list.front();
	_list.pop_front();
	return value;
}

void ListQueue::print()
{
	for (int n : _list) {
		std::cout << n << std::endl;
	}
}
