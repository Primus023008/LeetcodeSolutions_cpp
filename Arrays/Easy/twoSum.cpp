#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();

        //map to store values that dont have their match till ith iteration
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            //if a match is found, return the index
            if (mp.find(target - nums[i]) != mp.end())
            {
                return {i, mp.find(target - nums[i])->second};
            }

            //else, add the (value,index) pair to map
            else
            {
                mp.insert(pair<int, int>(nums[i], i));
            }
        }

        return {n - 1, mp.end()->second};
    }
};

int main()
{

    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = s.twoSum(nums, target);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}