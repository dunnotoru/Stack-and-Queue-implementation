#include <iostream>
#include <list>
#include <string>
#include "main.h"
#include "ListStack.h"
#include "ListQueue.h"
#include "ArrayStack.h"
#include "ArrayQueue.h"
#include "Map.h"



void Task_1() {
	int size = 1000000;

	unsigned int start_time = clock();
	ListStackDemo(size);
	unsigned int end_time = clock();
	int duration_ms = end_time - start_time;
	std::cout << "ListStack: " << duration_ms << " ms" << std::endl;

	start_time = clock();
	ArrayStackDemo(size);
	end_time = clock();
	duration_ms = end_time - start_time;
	std::cout << "ArrayStack: " << duration_ms << " ms" << std::endl;

	start_time = clock();
	ListQueueDemo(size);
	end_time = clock();
	duration_ms = end_time - start_time;
	std::cout << "ListQueue: " << duration_ms << " ms" << std::endl;

	start_time = clock();
	ArrayQueueDemo(size);
	end_time = clock();
	duration_ms = end_time - start_time;
	std::cout << "ArrayQueue: " << duration_ms << " ms" << std::endl;
}

void ListStackDemo(int size) {
	ListStack* stack = new ListStack();

	for (size_t i = 0; i < size; i++)
	{
		stack->push(2);
	}

	for (size_t i = 0; i < size; i++)
	{
		stack->pop();
	}
}

void ListQueueDemo(int size) {
	ListQueue* queue = new ListQueue();

	for (size_t i = 0; i < size; i++)
	{
		queue->enqueue(1);
	}

	for (size_t i = 0; i < size; i++)
	{
		queue->dequeue();
	}
}

void ArrayStackDemo(int size) {
	ArrayStack* stack = new ArrayStack(size);
	
	for (size_t i = 0; i < size; i++)
	{
		stack->push(2);
	}

	for (size_t i = 0; i < size; i++)
	{
		stack->pop();
	}
}

void ArrayQueueDemo(int size) {
	ArrayQueue* queue = new ArrayQueue(size);

	for (size_t i = 0; i < size; i++)
	{
		queue->enqueue(1);
	}

	for (size_t i = 0; i < size; i++)
	{
		queue->dequeue();
	}
}

void StackComparison() {
	int size;
	std::string buffer;
	std::cout << R"(Input size => )";
	std::cin >> buffer;
	
	try {
		size = std::stoi(buffer);
	}
	catch (...){
		std::cout << "Input error." << std::endl;
		return;
	}

	if (size < 1 || size > 10000000) {
		std::cout << "Size out of range.";
		return;
	}
	
	unsigned int start_time = clock();
	ListStackDemo(size);
	unsigned int end_time = clock();
	int duration_ms = end_time - start_time;
	std::cout << "ListStack: " << duration_ms << " ms" << std::endl;

	start_time = clock();
	ArrayStackDemo(size);
	end_time = clock();
	duration_ms = end_time - start_time;
	std::cout << "ArrayStack: " << duration_ms << " ms" << std::endl;
}

void QueueComparison() {
	int size;
	std::string buffer;
	std::cout << R"(input size => )";
	std::cin >> buffer;

	try {
		size = std::stoi(buffer);
	}
	catch (...) {
		std::cout << "Input error." << std::endl;
		return;
	}

	if (size < 1 || size > 10000000) {
		std::cout << "Size out of range.";
		return;
	}

	unsigned int start_time = clock();
	ListQueueDemo(size);
	unsigned int end_time = clock();
	int duration_ms = end_time - start_time;
	std::cout << "ListQueue: " << duration_ms << " ms" << std::endl;

	start_time = clock();
	ArrayQueueDemo(size);
	end_time = clock();
	duration_ms = end_time - start_time;
	std::cout << "ArrayQueue: " << duration_ms << " ms" << std::endl;
}

bool menu() {
	std::cout << R"(
[1] - stack comparison
[2] - queue comparison
[3] - map reveal
[q] - quit)" << std::endl;

	std::string buffer;
	std::cin >> buffer;

	if (buffer.size() != 1)
		return true;

	switch (buffer[0])
	{
	case '1':
		StackComparison();
		break;
	case '2':
		QueueComparison();	
		break;
	case '3':
		break;
	case 'q':
		return false;
		break;
	}

	return true;
}

int main() {
	bool active = true;
	while (active) {
		active = menu();
	}
}