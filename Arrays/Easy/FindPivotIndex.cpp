#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {

        int n = nums.size();
        int sum = 0;
        int ls = 0; //initialise leftSum to 0

        for (int i = 0; i < n; i++)
            sum += nums[i]; 

        for (int i = 0; i < n; i++)
        {

            if (ls == sum - ls - nums[i])  //if ls == sum of elements to the right of nums[i]
            {
                return i;
            }
            ls += nums[i];  //else update ls
        }

        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,7,3,6,5,6};
    int ans = s.pivotIndex(nums);

    cout<<ans;
}