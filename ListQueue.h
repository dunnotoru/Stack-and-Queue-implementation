#pragma once
#include <list>

class ListQueue
{
private:
	std::list<int> _list;
public:
	ListQueue();
	~ListQueue();

	void enqueue(int);
	int dequeue();
	void print();
};

