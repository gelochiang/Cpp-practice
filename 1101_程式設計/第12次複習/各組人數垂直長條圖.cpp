#include <iostream>
#include <iomanip>
using namespace std;

void verticalbar(int *arr, int size)
{
    int arrData, max, adjustMax;
    int point[11] = {0};
    for(int i = 0; i < size; i++)
    {
        arrData = *(arr+i);
        if(arrData >= arrData/10*10 && arrData <= arrData/10*10+9) point[arrData/10]++;
    }
    
    max = point[0];
    for(int i = 1; i < 11; i++)
    {
        if(max < point[i]) max = point[i];
    }
    adjustMax = max;

    for(int i = 0; i < max; i++) // Control layers.
    {
        for(int j = 0; j < 11; j++)
        {
            cout << ((point[j] >= adjustMax)? "*" : " ");
        }
        cout << endl;
        adjustMax--;
    }
}

int main(){
	const int arraySize=5; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	verticalbar(score, arraySize);
}