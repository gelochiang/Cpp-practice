#include <iostream>
using namespace std;
char **arr;
void initial(int dim);
void draw(int side);
void createGraphic(int, int, int, int, int, int);


int main()
{
	int side, box1_x,box2_x, box1_y, box2_y,box1_side,box2_side;
	cin >> side;
	cin >> box1_x >> box1_y >> box1_side;
	cin >> box2_x >> box2_y >> box2_side;
	initial(side);
	createGraphic(box1_x, box2_x, box1_y, box2_y, box1_side, box2_side);
	draw(side);
}

void initial(int dim)
{
	arr = new char*[dim];
	for (int i = 0; i < dim; i++)
		arr[i] = new char[dim];
	for (int i = 0; i < dim; i++)
		for (int j = 0; j < dim; j++)
			arr[i][j] = '*';
}
void draw(int side)
{
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

void createGraphic(int box1_x, int box2_x, int box1_y, int box2_y, int box1_side, int box2_side)
{
    for(int i = box1_y; i < box1_y+box1_side; i++)
    {
        for(int j = box1_x; j < box1_x+box1_side; j++)
        {
            arr[i][j] = '-';
        }
    }

    for(int i = box2_y; i < box2_y+box2_side; i++)
    {
        for(int j = box2_x; j < box2_x+box2_side; j++)
        {
            if(arr[i][j] == '-') arr[i][j] = '+';
            else arr[i][j] = '-';
        }
    }
}