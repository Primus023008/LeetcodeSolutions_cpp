#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        
        int last = 0;
        int k = 1;

        if (nums.size() == 0)
        {
            return 0;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != nums[last])  //if current element is different than last element
            {
                nums[last + 1] = nums[i];  //update last element
                last++;
                k++;
            }
        }

        return k;
    }
};

int main()
{
    Solution s;
    vector<int> nums= {0,0,1,1,1,2,2,3,3,4};
    int k = s.removeDuplicates(nums);

    for (int i = 0; i < k; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}