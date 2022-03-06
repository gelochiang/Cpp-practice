#include "solve2.h"

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
    vector<int> ans(2);
    map<int, int> myMap;
    for(int i = 0; i < nums.size(); i++)
    {
        if(myMap.find(nums[i]) != myMap.end())
        {
            ans[0] = myMap[nums[i]];
            ans[1] = i;
            return ans;
        }
        else
        {
            myMap[target-nums[i]] = i;
        }
    }
    return ans;  
}