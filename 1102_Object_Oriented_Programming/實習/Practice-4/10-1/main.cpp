#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void printStringArray(string word[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << word[i] << endl;
    }
}

int main()
{
    string words;
    string word[10];
    int len;
    int arrPot = 0;

    getline(cin, words);
    len = words.length();

    stringstream ss(words);

    while(!ss.eof())
    {
        ss >> word[arrPot];
        arrPot++;
    }
    arrPot--;

    printStringArray(word, arrPot+1);
    cout << "Length:" << len << endl;

    return 0;
}