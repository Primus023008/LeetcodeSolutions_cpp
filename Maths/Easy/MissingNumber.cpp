#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }

        return (n * (n + 1)) / 2 - sum;
    }
};

int main()
{
    Solution s;
    vector<int> nums= {9,6,4,2,3,5,7,0,1};

    cout<<s.missingNumber(nums);
}