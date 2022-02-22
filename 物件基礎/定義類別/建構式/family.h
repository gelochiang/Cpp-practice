#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Family
{
private:
    int ID;
    string appelation;
    string name;
    string birthday;
    int age;

public:
    Family(int, string, string, string, int); // 括號裡頭 dataType 記得打
    void printAll();
    void riseAge(int);
    void dropAge(int);
};