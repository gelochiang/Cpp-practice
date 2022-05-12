#include <iostream>
using namespace std;

#ifndef STACK_H
#define STACK_H

class Stack
{
public:
    Stack();
    Stack(const Stack&);
    ~Stack();
    void push(int);
    int pop();
    int peek();
    int getSize() const;
    void printStack() const;

private:
    int *element;
    int capacity;
    int size;
    void checkSize();
};

Stack::Stack() : size(0), capacity(1)
{
    element = new int[capacity];
}

Stack::Stack(const Stack &stack)
{
    element = new int[stack.getSize()];
    capacity = stack.capacity;
    size = stack.size;

    for(int i = 0; i < stack.size; i++)
    {
        element[i] = stack.element[i];
    }
}

int Stack::getSize() const
{
    return size;
}

void Stack::push(int value)
{
    element[size++] = value;
}

int Stack::pop()
{
    return element[--size];
}

int Stack::peek()
{
    return element[size-1];
}

void Stack::printStack() const
{
    cout << "Stack : " << endl;
    for(int i = 0; i < size; i++)
    {
        if(i != size-1)
            cout << element[i] << ", ";
        else
            cout << element[i] << endl;
    }
}

void Stack::checkSize()
{
    if(size == capacity)
    {
        int *old = element;
        capacity = size*2;
        element = new int[capacity];

        for(int i = 0; i < size; i++)
        {
            element[i] = old[i];
        }

        delete [] old;
    }
}

Stack::~Stack()
{
    delete [] element;
}

#endif