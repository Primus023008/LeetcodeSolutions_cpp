#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int profit = 0;
        for (int i = 1; i < n; i++)
        {

            if (prices[i] > prices[i - 1]) //if current element is larger than previous
            {
                profit += prices[i] - prices[i - 1]; // add to profit
            }
          
        }


        return profit;
    }
};

int main()
{

    vector<int> a = {1,2,3,4,5};
    Solution s;
    int ans = s.maxProfit(a);

    cout << ans;
}
