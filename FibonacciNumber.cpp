#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        //base cases
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;

        int a = 0;
        int b = 1;
        int sum = 0;

        for (int i = 2; i <= n; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }

        return sum;
    }
};

int main()
{
    Solution s;
    int n=2;
    int ans = s.fib(n);

    cout<<ans;
}