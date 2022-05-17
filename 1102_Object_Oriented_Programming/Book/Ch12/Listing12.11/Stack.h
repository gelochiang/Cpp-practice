#include <iostream>
using namespace std;

#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
public:
    Stack();
    Stack(Stack &);
    ~Stack();
    void push(T);
    T peek() const;
    T pop();
    bool isEmpty() const;
    int getSize() const;
    int getCapacity() const;
    void ensureSize();
    void printStack() const;


private:
    T *elements;
    int size;
    int capacity;
};

template<typename T>
Stack<T>::Stack() : size(0), capacity(1) 
{
    elements = new T[capacity];
}

template<typename T>
Stack<T>::Stack(Stack &s)
{
    size = s.size;
    capacity = s.capacity;
    elements = new T[capacity];

    for(int i = 0; i < capacity; i++)
    {
        elements[i] = s.elements[i];
    }
}

template<typename T>
Stack<T>::~Stack()
{
    delete [] elements;
}

template<typename T>
void Stack<T>::push(T value)
{
    ensureSize();
    elements[size++] = value;
}

template<typename T>
T Stack<T>::peek() const
{
    return elements[size-1];
}

template<typename T>
T Stack<T>::pop()
{
    return elements[--size];
}

template<typename T>
bool Stack<T>::isEmpty() const
{
    return (size == 0);
}

template<typename T>
int Stack<T>::getSize() const
{
    return size;
}

template<typename T>
void Stack<T>::ensureSize()
{
    if(size == capacity)
    {
        T *old = elements;
        capacity *= 2;
        elements = new T[capacity];
        
        for(int i = 0; i < size; i++)
        {
            elements[i] = old[i];
        }

        delete [] old;
    }
}

template<typename T>
void Stack<T>::printStack() const
{
    for(int i = 0; i < size; i++)
    {
        if(i != size-1)
            cout << elements[i] << ", ";
        else
            cout << elements[i] << endl;
    }
}

template<typename T>
int Stack<T>::getCapacity() const
{
    return capacity;
}

#endif