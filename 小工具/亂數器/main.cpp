#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    vector<string> items;
    int size;
    string item;

    cout << "Please enter how many items you want to shuffle : ";
    cin >> size;

    for(int index = 0; index < size; index++)
    {
        cout << "Enter item " << index+1 << " : ";
        cin >> item;
        items.push_back(item);
    }

    srand(time(0));
    int bufferIndex = rand()%size;
    cout << bufferIndex << endl;
    
    for(int index = 0; index < items.size(); index++)
    {
        string temp = items[index];
        items[index] = items[bufferIndex];
        items[bufferIndex] = temp;
        // swap(items[index], items[bufferIndex]);
    }

    for(int index = 0; index < items.size(); index++)
    {
        cout << "Order " << index+1 << " : " << items[index] << endl;
    }
    
    return 0;
}