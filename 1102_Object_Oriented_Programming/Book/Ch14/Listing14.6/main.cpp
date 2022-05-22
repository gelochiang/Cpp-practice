#include <iostream>
using namespace std;

class Date
{
public:
    Date(int year, int month, int day) : year(year), month(month), day(day) {};
    friend void p();

private:
    int year;
    int month;
    int day;
};

void p()
{
    Date date(1314, 5, 20);
    date.year = 1315;
    cout << date.year << endl;
}

int main()
{
    p();

    return 0;
}