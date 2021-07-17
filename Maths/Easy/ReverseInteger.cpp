#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {

        long int ans = 0;
        int temp = abs(x);

        while (temp > 0)
        {
            ans = ans * 10 + temp % 10;
            temp /= 10;
        }

        if (x < 0)
        {
            ans *= -1;
        }

        if (ans < -pow(2, 31) || ans > pow(2, 31) - 1)
        {
            return 0;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    int x=123;
    cout<<s.reverse(x);
}