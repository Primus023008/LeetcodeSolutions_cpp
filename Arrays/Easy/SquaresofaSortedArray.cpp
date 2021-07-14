#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        int start = 0; //start pointer
        int end = n - 1; //end pointer
        vector<int> result;

        for (int i = 0; i < n; i++)
        {

            if (abs(nums[start]) >= abs(nums[end])) //becuase, if abs(a)>abs(b) => a^2 > b^2
            {

                result.push_back(nums[start] * nums[start]);
                start++;
            }
            else
            {

                result.push_back(nums[end] * nums[end]);
                end--;
            }
        }

        reverse(result.begin(), result.end());

        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums ={-4,-1,0,3,10}, ans;
    ans = s.sortedSquares(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}