#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n = haystack.length(), m = needle.length();
        if (m == 0)
            return 0;
        if (haystack.find(needle) || haystack[0] == needle[0])
        {
            return haystack.find(needle) + 0;
        }
        return -1;
    }
};

int main()
{
    Solution s;
    string s1 = "mississippi", s2 = "issip";
    int ans = s.strStr(s1, s2);

    cout << ans;
}