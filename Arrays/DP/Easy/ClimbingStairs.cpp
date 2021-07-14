#include <bits/stdc++.h>
using namespace std;

//for n=1, 1step*1 => only 1 way
// for n=2, [1-1]] / [2] => 2 ways
//for n=3, [1-1-1],[1-2],[2-1] => 3ways
//for n=4 [1-1-1-1], [1-1-2], [1-2-1], [2-1-1], [2-2] => 5ways
// it follows fibbionaci pattern

class Solution
{
public:
    int climbStairs(int n)
    {

        if (n <= 2)
        {
            return n;
        }

        int first = 1;
        int second = 2;
        int result;

        for (int i = 3; i <= n; i++)
        {
            result = first + second;
            first = second;
            second = result;
        }

        return result;
    }
};

int main()
{
    Solution s;
    int n=3;
    int ans= s.climbStairs(n);

    cout<<n;
}