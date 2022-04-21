#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s)
{
    int low = 0;
    int high = s.length()-1;

    while(high > low)
    {
        if(s[low] != s[high])
        {
            return false;
        }

        low++;
        high--;
    }

    return true;
}

int main()
{
    cout << "Enter a string : ";
    string s;
    getline(cin, s);

    if(isPalindrome(s))
    {
        cout << s << " is a palindrome" << endl;

        return 0;
    }
    
    cout << s << " is not a palindrome" << endl;

    return 0;
}