#include "Stack.h"

void processAnOperator(Stack<int> &operandStack, Stack<char> &operatorStack)
{
    char op = operatorStack.pop();
    int op1 = operandStack.pop();
    int op2 = operandStack.pop();

    if(op == '+')
        operandStack.push(op2+op1);
    else if(op == '-')
        operandStack.push(op2-op1);
    else if(op == '*')
        operandStack.push(op2*op1);
    else if(op == '/')
        operandStack.push(op2/op1);
}