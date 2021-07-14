#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int toBin(int n)
    {
        int count = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                count++;
            }
            n = n / 2;
        }

        return count;
    }

    vector<int> countBits(int n)
    {

        vector<int> ans(n + 1);
        for (int i = 0; i < n + 1; i++)
        {
            ans[i] = toBin(i);
        }

        return ans;
    }
};

int main()
{
    Solution s;
    int num = 5;
    vector<int> ans = s.countBits(num);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    // cout<<4%int(pow(2,0));
}