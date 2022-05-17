#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"
#include "evaluate.cpp"

int main()
{
    string expression;
    cout << "Enter an expression : ";
    getline(cin, expression);

    cout << expression << " = "
        << evaluateExpression(expression) << endl;

    return 0;
}