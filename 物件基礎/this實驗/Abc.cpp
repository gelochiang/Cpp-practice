#include <iostream>
using namespace std;

#include "Abc.h"

Abc::Abc(int a, int b)
{
    this->a = a; // 這個範例一定要用 this
    this->b = b; // 不然直接 a = a 會出現邏輯錯誤
}

void Abc::print()
{
    cout << a << " " << b << endl;
}