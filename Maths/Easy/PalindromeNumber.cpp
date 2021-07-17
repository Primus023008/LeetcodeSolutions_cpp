#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string num = to_string(abs(x));

        int st = 0;
        int end = num.length() - 1;

        if (x < 0)
        {
            return false;
        }

        while (st < end)
        {
            if (num[st++] != num[end--])
                return false;
        }

        return true;
    }
};

int main()
{
    Solution s;
    int x=121;

    cout<< (s.isPalindrome(x)? "true":"false");
}