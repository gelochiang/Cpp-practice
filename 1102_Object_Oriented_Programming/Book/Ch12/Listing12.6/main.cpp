#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"

template<typename T>
void printStack(Stack<T> &stack)
{
    while(!stack.empty())
    {
        cout << stack.pop() << " ";
    }
    cout << endl;
}

int main()
{
    Stack<int> intStack;
    for(int i = 0; i < 10; i++)
    {
        intStack.push(i+1);
    }

    printStack(intStack);

    Stack<string> strStack;
    strStack.push("Gelo");
    strStack.push("Chiang");

    printStack(strStack);

    return 0;
}