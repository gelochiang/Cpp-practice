#include <iostream>
using namespace std;

template<typename T=int>
class Gelo
{
public:
    T add(T, T);
};

template<typename T>
T Gelo<T>::add(T a, T b)
{
    return a+b;
}

int main()
{
    Gelo<> g1;
    cout << g1.add(1, 2) << endl;
    
    Gelo<double> g2;
    cout << g2.add(1.1, 2.2) << endl;

    return 0;
}