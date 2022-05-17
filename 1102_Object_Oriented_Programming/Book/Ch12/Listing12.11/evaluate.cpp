#include <string>
#include <cstring>
using namespace std;

#include "Stack.h"
#include "split.cpp"
#include "operator.cpp"

int evaluateExpression(const string &expression)
{
    Stack<int> operandStack;
    Stack<char> operatorStack;

    vector<string> tokens = split(expression);

    for(int i = 0; i < tokens.size(); i++)
    {
        if(tokens[i][0] == '+' || tokens[i][0] == '-')
        {
            while(!operatorStack.isEmpty() && (operatorStack.peek() == '+'
                || operatorStack.peek() == '-' || operatorStack.peek() == '*'
                || operatorStack.peek() == '/'))
            {
                processAnOperator(operandStack, operatorStack);
            }
            
            operatorStack.push(tokens[i][0]);
        }
        else if(tokens[i][0] == '*' || tokens[i][0] == '/')
        {
            while(!operatorStack.isEmpty() && (operatorStack.peek() == '*'
                || operatorStack.peek() == '/'))
            {
                processAnOperator(operandStack, operatorStack);
            }

            operatorStack.push(tokens[i][0]);
        }
        else if(tokens[i][0] == '(')
        {
            operatorStack.push('(');
        }
        else if(tokens[i][0] == ')')
        {
            while(operatorStack.peek() != '(')
            {
                processAnOperator(operandStack, operatorStack);
            }

            operatorStack.pop();
        }
        else
        {
            operandStack.push(atoi(tokens[i].c_str()));
        }
    }

    while(!operatorStack.isEmpty())
    {
        processAnOperator(operandStack, operatorStack);
    }

    return operandStack.pop();
}