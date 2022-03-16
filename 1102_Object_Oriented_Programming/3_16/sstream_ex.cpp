#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s1 = "Hello my tank !";
    stringstream s2(s1);
    string s3;

    while(!s2.eof())
    {
        s2 >> s1;
        cout << s1 << endl;
    }

    getline(cin, s3);
    cout << s3 << endl;
}