#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> moveZeroes(vector<int> &nums)
    {
        int count = 0;
        int n = nums.size();
        vector<int> ans;

        if (n != 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                {
                    count++; //if element is 0, increment count
                }
                else
                {
                    ans.push_back(nums[i]); //else, add that element to ans vector
                }
            }

            for (int i = 0; i < count; i++)
            {
                ans.push_back(0); //add count number of zeroes at the end
            }

            for (int i = 0; i < n; i++)
            {
                nums[i] = ans[i]; //copy ans array to nums
            }
        }

        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0,1,0,3,12};
    vector<int> ans  = s.moveZeroes(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}