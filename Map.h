#pragma once

class Map
{
private: 
	int* arr;
	int size;

	int computeIndex(char);
public:
	Map(int);
	~Map();

	void set(char, int);
	int get(char);
	void remove(char);
	bool contains(char);
	void print();
};

