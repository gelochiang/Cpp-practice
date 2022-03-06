#include <iostream>
#include <vector>
using namespace std;

#include "solve1.h"

int main()
{
    vector<int> v = {2, 7, 11, 15};
    int t = 9;
    Solution s;
    vector<int> a = s.twoSum(v, t);
    for(int i:a) cout << i << " ";
    cout << endl;
}