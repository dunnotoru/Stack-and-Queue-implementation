#pragma once
#include <list>

class ListStack
{
private:
	std::list<int> _list;
public:
	ListStack();
	~ListStack();

	void push(int);
	int pop();
	void print();
};

