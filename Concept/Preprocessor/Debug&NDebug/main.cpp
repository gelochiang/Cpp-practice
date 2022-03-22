#include <iostream>
using namespace std;

int main()
{
    #ifdef _DEBUG
    cout << "I am debug version" << endl;
    #else
    cout << "I am release version" << endl;
    #endif
}