#include <iostream>
using namespace std;

void barchart(int *arr, int size)
{
    int arrData;
    int point[11] = {0};

    for(int i = 0; i < size; i++)
    {
        arrData = *(arr+i);
        if(arrData >= arrData/10*10 && arrData <= arrData/10*10+9) point[arrData/10]++;
    }
    
    for(int i = 0; i < 11; i++) // Control layer.
    {
        for(int j = 0; j < point[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	barchart(score, arraySize);
}