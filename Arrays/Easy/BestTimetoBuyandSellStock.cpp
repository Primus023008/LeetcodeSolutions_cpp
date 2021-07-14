#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &a)
    {
        int g_max = 0; //global maxximum
        int l_max = 0; //local maximum

        int n = a.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (a[j] - a[i] > l_max) //if current profil is grater than local maximum, update local maximum
                {
                    l_max = a[j] - a[i];
                }
            }
            if (l_max > g_max)
            {
                g_max = l_max; //after inner loop ends, update global maximum
            }
        }

        return g_max;
    }
};

int main()
{

    vector<int> a = {7, 1, 5, 3, 6, 4};
    Solution s;
    int ans = s.maxProfit(a);

    cout << ans;
}
