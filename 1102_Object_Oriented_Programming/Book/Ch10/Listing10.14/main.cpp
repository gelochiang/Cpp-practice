#include <iostream>
using namespace std;

#include "StackOfIntegers.h"

int main()
{
    StackOfIntegers stack;

    for(int i = 0; i < 10; i++)
    {
        stack.push(i);
    }

    while(! stack.isEmpty())
    {
        cout << stack.pop() << " ";
    }

    cout << endl;

    return 0;
}