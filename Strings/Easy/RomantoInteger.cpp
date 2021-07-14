#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        if (s.length() == 0)
        {
            return 0;
        }
        map<char, int> valueOf;
        valueOf.insert({'I', 1});
        valueOf.insert({'V', 5});
        valueOf.insert({'X', 10});
        valueOf.insert({'L', 50});
        valueOf.insert({'C', 100});
        valueOf.insert({'D', 500});
        valueOf.insert({'M', 1000});
        int ans = 0;
        int i = 0;
        while (i < s.length())
        {
            if (s[i] == 'I')
            {
                if (s[i + 1] == 'V' || s[i + 1] == 'X')
                {
                    ans -= valueOf.find('I')->second;
                }
                else
                {
                    ans += valueOf.find('I')->second;
                }
            }

            else if (s[i] == 'X')
            {
                if (s[i + 1] == 'L' || s[i + 1] == 'C')
                {
                    ans -= valueOf.find('X')->second;
                }
                else
                {
                    ans += valueOf.find('X')->second;
                }
            }
            else if (s[i] == 'C')
            {
                if (s[i + 1] == 'D' || s[i + 1] == 'M')
                {
                    ans -= valueOf.find('C')->second;
                }
                else
                {
                    ans += valueOf.find('C')->second;
                }
            }
            else
            {
                ans += valueOf.find(s[i])->second;
            }

            i++;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    string str = "LVIII";
    int ans = s.romanToInt(str);

    cout << ans;
}