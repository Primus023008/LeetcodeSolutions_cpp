#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        if (nums.size() == 1)
        {
            return nums[0];
        }

        return (nums[nums.size() / 2]);
    }
};

int main()
{
    Solution s;
    
    vector<int> nums = {3,2,3};
    int ans = s.majorityElement(nums);

    cout<<ans;

}