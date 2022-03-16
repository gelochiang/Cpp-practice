#include <iostream>
using namespace std;

class Math
{
public:
    constexpr static double pi = 3.1415926; // static 的 data fields 想要 initialize need const.
    static double toRadian(double);
};

double Math::toRadian(double angle)
{
    return pi/180*angle;
}

int main()
{
    cout << Math::pi << endl;
    cout << Math::toRadian(30) << endl;

    return 0;
}