#pragma once

class ArrayStack
{
private:
	int top;
	int* _array;
	int size;
public:
	ArrayStack(int);
	~ArrayStack();

	void push(int);
	int pop();
	void print();
};

