#include <iostream>
using namespace std;

class Test
{
    public:
    double radius;
    bool buffer;
    Test(double);
    void BigThan10();
};

Test::Test(double radius):
    radius(radius)
    {
        buffer = (radius > 10 ? true : false);
    }

void Test::BigThan10()
{
    cout << buffer << endl;
}

int main()
{
    double r;
    cin >> r;
    
    Test t1(r);
    t1.BigThan10();

    return 0;
}