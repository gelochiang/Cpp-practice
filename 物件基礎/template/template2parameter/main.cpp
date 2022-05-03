#include <iostream>
using namespace std;

template<typename T, int capacity>
class Gelo
{
public:
    Gelo();
    void printArr();

private:
    T arr[capacity];
    int arrSize;
};

template<typename T, int capacity>
Gelo<T, capacity>::Gelo()
{
    arrSize = capacity;
    for(int i = 0; i < arrSize; i++)
    {
        arr[i] = i+1;
    }
}

template<typename T, int capacity>
void Gelo<T, capacity>::printArr()
{
    for(int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    Gelo<int, 5> g1;
    g1.printArr();

    return 0;
}