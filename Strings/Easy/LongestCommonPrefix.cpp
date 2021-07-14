#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string common = strs[0]; // intitialise common string with 1st element

        for (int i = 1; i < strs.size(); i++)
        {
            for (int j = 0; j < common.size(); j++)
            {

                //update common with each iteration
                if (common[j] == strs[i][j])
                {
                    continue;
                }
                else
                {
                    common.resize(j);
                    break;
                }
            }
        }

        return common;
    }
};

int main()
{
    Solution s;
    vector<string> strs = {"dog", "racecar", "car"};

    cout << s.longestCommonPrefix(strs);
}