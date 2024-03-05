#include "ArrayStack.h"
#include <iostream>

ArrayStack::ArrayStack(int size) {
    top = 0;
    _array = new int[size];
    this->size = size;
}

ArrayStack::~ArrayStack() {
    delete _array;
}

void ArrayStack::push(int value)
{
    if (top == size - 1) return;
    _array[top] = value;
    top += 1;
}

int ArrayStack::pop()
{
    top -= 1;
    return _array[top];
}

void ArrayStack::print()
{
    for (size_t i = 0; i < top; i++)
    {
        std::cout << _array[i] << std::endl;
    }
}
