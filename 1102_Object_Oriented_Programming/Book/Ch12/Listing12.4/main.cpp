#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"

int main()
{
    Stack<int> intStack;
    for(int i = 0; i < 10; i++)
    {
        intStack.push(i+1);
    }

    while(!intStack.empty())
    {
        cout << intStack.pop() << " ";
    }
    cout << endl;

    Stack<string> strStack;
    strStack.push("Gelo");
    strStack.push("Chiang");

    while(!strStack.empty())
    {
        cout << strStack.pop() << " ";
    }
    cout << endl;

    return 0;
}