#include <iostream>
#include <list>
#include "algos_lab1.h"
#include "ListStack.h"
#include "ListQueue.h"
#include "ArrayStack.h"
#include "ArrayQueue.h"
#include "Map.h"

int main()
{
	Map* map = new Map(100);

	map->set('A', 125);
	map->set('K', 22);
	map->set('B', 6);

	map->print();
}

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