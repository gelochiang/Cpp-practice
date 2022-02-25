#include <iostream>
using namespace std;
char **arr;
void initial(int dim);
int Subtraction, Union, Intersection;

void calculateSubtraction(int b1x, int b2x, int b1y, int b2y, int b1s, int b2s)
{
    int box1 = 0;
    for(int i = b1y; i < b1y+b1s; i++)
    {
        for(int j = b1x; j < b1x+b1s; j++)
        {
            box1++;
        }
    }
    Subtraction = box1-Intersection;
}

void calculateUnion(int b1x, int b2x, int b1y, int b2y, int b1s, int b2s)
{
    int box1_2 = 0;
    for(int i = b1y; i < b1y+b1s; i++)
    {
        for(int j = b1x; j < b1x+b1s; j++)
        {
            box1_2++;
        }
    }
    for(int i = b2y; i < b2y+b2s; i++)
    {
        for(int j = b2x; j < b2x+b2s; j++)
        {
            box1_2++;
        }
    }
    Union = box1_2-Intersection;
}

void calculateIntersection(int b1x, int b2x, int b1y, int b2y, int b1s, int b2s)
{
    int intersection = 0;
    for(int i = b2y; i < b2y+b2s; i++)
    {
        for(int j = b2x; j < b2x+b2s; j++)
        {
            if(i < b1y+b1s && j < b1x+b1s) intersection++;
        }
    }
    Intersection = intersection;
}

int main()
{
	int side, box1_x,box2_x, box1_y, box2_y,box1_side,box2_side;
	cin >> side;
	cin >> box1_x >> box1_y >> box1_side;
	cin >> box2_x >> box2_y >> box2_side;
	initial(side);
    calculateIntersection(box1_x, box2_x, box1_y, box2_y, box1_side, box2_side);
    calculateSubtraction(box1_x, box2_x, box1_y, box2_y, box1_side, box2_side);
    calculateUnion(box1_x, box2_x, box1_y, box2_y, box1_side, box2_side);
    cout << "Subtraction:" << Subtraction << endl;
    cout << "Union:" << Union << endl;
    cout << "Intersection:" << Intersection << endl;
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