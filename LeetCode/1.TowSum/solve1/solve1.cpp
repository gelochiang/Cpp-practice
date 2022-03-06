#include "solve1.h"

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
    vector<int> vec(2);
    for(int i = 0; i < nums.size()-1; i++)
    {
        for(int j = i+1; j < nums.size(); j++)
        {
            if(nums[i]+nums[j] == target)
            {
                vec[0] = i;
                vec[1] = j;
                return vec;
            }
        }
    }
    return vec;
}