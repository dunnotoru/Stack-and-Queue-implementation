#include "ListStack.h"
#include <iostream>
#include <list>

ListStack::ListStack() {

}

ListStack::~ListStack() {
	
}

void ListStack::push(int value) {
	_list.push_back(value);
}

int ListStack::pop() {
	int value = _list.back();
	_list.pop_back();
	return value;
}

void ListStack::print() {
	for (int n : _list) {
		std::cout << n << std::endl;
	}
}