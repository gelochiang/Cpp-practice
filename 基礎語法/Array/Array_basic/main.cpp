#include <iostream>
using namespace std;

void transpose(int arr[][2])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = i+1; j < 2; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void outputArr(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a+i << " ";
    }
    cout << endl;
}

void outputArr2(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << *(a+i) << " ";
    }
    cout << endl;
}

void printArr(int &a, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a+i << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3};
    for(int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    char chr1[] = "abc";
    for(int i = 0; i < 3; i++)
    {
        cout << chr1[i] << " ";
    }
    cout << endl;
    cout << "----- 2維 -----\n";

    // 2 維陣列
    int arr2[][2] = {
        {1, 2},
        {3, 4}
    };
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    transpose(arr2);

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // 下方為傳址版本
    int arr3[] = {1, 2, 3};
    cout << "----- 傳址版 -----\n";
    outputArr(arr3, 3);
    outputArr2(arr3, 3);
    printArr(arr3[0], 3); 
    /*
        函式接收參數假如是一個位址就要明確的跟他說 array 第 0 的位置是多少
        能比較 88, 89 和 90 的差別所在
    */

    return 0;
}