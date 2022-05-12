#include "Stack.h"

int main()
{
    Stack s1;

    for(int i = 0; i < 10; i++)
    {
        s1.push(i);
        cout << "Size : " << s1.getSize() << endl;
        s1.printStack();
    }

    s1.pop();
    s1.pop();
    
    s1.printStack();

    return 0;
}