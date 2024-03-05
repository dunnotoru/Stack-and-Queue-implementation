#include "Map.h"
#include <iostream>

int Map::computeIndex(char key) {
	return (int)key - 'A';
}

Map::Map(int size)
{
	arr = new int[size];
	this->size = size;
	for (size_t i = 0; i < size; i++) {
		arr[i] = -1;
	}
}

Map::~Map()
{
	delete[] arr;
}

void Map::set(char key, int value)
{
	int index = computeIndex(key);
	if (index >= size)
		throw "invalid key";

	arr[index] = value;
}

int Map::get(char key) {
	int index = computeIndex(key);
	return arr[index];
}

void Map::remove(char key) {
	int index = computeIndex(key);
	arr[index] = -1;
}

bool Map::contains(char key) {
	int index = computeIndex(key);
	if (arr[index] == -1)
		return false;

	return true;
}

void Map::print() {
	for (size_t i = 0; i < size; i++) {
		if (arr[i] == -1) continue;
		
		char key = i + 'A';
		std::cout << key << " : " << arr[i] << std::endl;
	}
}
