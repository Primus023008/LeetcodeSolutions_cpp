#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // in each iteration, all the elements except the max one will be incremented bny 1
    // this is equivalent to reducing only the max element by 1, for this problem
    // therefore, each element except the minimum will be reduced to minimum
    // number of moves= num(reduce a[0] to min) + num(reduce a[1] to min) .... num(reduce a[n-1] to min)....
    // number of moves= a[0]-min + a[1]-min ..... a[n-1]-min.......
    // number of moves= (a[0]+ a[1] + a[2].....a[n-1]) - n*(min)
    
    int minMoves(vector<int> &nums)
    {

        int min = INT_MAX;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            if (nums[i] < min)
                min = nums[i];
            sum += nums[i];
        }

        return sum - nums.size() * min;
    }
};

int main()
{
    Solution s;
    vector<int> nums= {1,2,3};
    cout<<s.minMoves(nums);
}