#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sum(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += pow(n % 10, 2);
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n)
    {

        int sq = n;
        map<int, bool> mp;

        while (sq != 1)
        {
            if (mp[sum(sq)] == true)
            {
                return false;
            }
            sq = sum(sq);
            mp[sq] = true;
        }

        return true;
    }
};

int main()
{
    Solution s;
    int n=19;

    cout<< (s.isHappy(n)? "true":"false");
}