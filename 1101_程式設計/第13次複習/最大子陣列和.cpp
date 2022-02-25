#include <iostream>
#include <iomanip>

using namespace std;
const int rows=4;
const int columns=4;

int sum(int arr[][columns], int ox, int oy, int zx, int zy)
{
    int SUM = 0;
    for(; ox <= zx; ox++)
    {
        for(int i = oy; i <= zy; i++)
        {
            SUM += arr[ox][i];
        }
    }
    return SUM;
}

void findBigerArr(int arr[][columns])
{
    int SUM, max = arr[0][0];
    for(int ox = 0; ox < rows; ox++)
    {
        for(int oy = 0; oy < columns; oy++)
        {
            for(int zx = 0; zx < rows; zx++)
            {
                for(int zy = 0; zy < columns; zy++)
                {
                    SUM = sum(arr, ox, oy, zx, zy);
                    if(max < SUM) max = SUM;
                }
            }
        }
    }
    cout << max << endl;
}


int main(){
	

	int array[rows][columns];
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		    cin >> array[i][j];
		}
	}
	
	findBigerArr(array);
}