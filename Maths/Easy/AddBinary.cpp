#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {

        int l1 = a.length() - 1;
        int l2 = b.length() - 1;
        int carry = 0;
        string ans = "";

        while (l1 >= 0 || l2 >= 0)
        {

            int num1 = (l1 >= 0) ? (a[l1--] - '0') : 0;
            int num2 = (l2 >= 0) ? (b[l2--] - '0') : 0;

            ans = to_string((carry + num1 + num2) % 2) + ans;
            carry = (carry + num1 + num2) / 2;
        }

        if (carry != 0)
        {
            ans = to_string(carry) + ans;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    string a="1010", b="1011";
    cout<<s.addBinary(a,b);
}