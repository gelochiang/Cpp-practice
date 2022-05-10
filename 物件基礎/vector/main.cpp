#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    // 2D
    vector<vector<int> > twoDVector(2, vector<int>(2, 2));
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << twoDVector[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;

    // 3D [3][4][5]
    vector<vector<vector<int> > > threeDVector(3, vector<vector<int> >(4, vector<int>(5)));
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            for(int k = 0; k < 5; k++)
            {
                cout << threeDVector[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    vector<vector<vector<int> > > assignVector =
    {
        {
            {1, 2, 3},
            {3, 4, 5},
            {6, 7, 8}
        },
        {
            {1, 2, 3},
            {3, 4, 5},
            {6, 7, 8}
        },
        {
            {1, 2, 3},
            {3, 4, 5},
            {6, 7, 8}
        },
    };

    cout << endl;

    // vector(assign version)
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                cout << assignVector[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}