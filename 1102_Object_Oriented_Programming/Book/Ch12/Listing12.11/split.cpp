#include <vector>
#include <string>
using namespace std;

vector<string> split(const string &expression)
{
    vector<string> v;
    string numberString;

    for(int i = 0; i < expression.size(); i++)
    {
        if(isdigit(expression[i]))
        {
            numberString.append(1, expression[i]);
        }
        else
        {
            if(numberString.size() > 0)
            {
                v.push_back(numberString);
                numberString.erase();
            }
            if(!isspace(expression[i]))
            {
                string s;
                s.append(1, expression[i]);
                v.push_back(s);
            }
        }
    }

    if(numberString.size() > 0)
    {
        v.push_back(numberString);
    }

    return v;
}