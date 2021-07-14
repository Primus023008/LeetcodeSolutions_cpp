#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int l1 = num1.length() - 1;
        int l2 = num2.length() - 1;
        int carry = 0;
        string ans = "";

        while (l1 >= 0 || l2 >= 0)
        {
            int val1 = l1 >= 0 ? num1[l1--] - '0' : 0; //if num1 is not empty
            int val2 = l2 >= 0 ? num2[l2--] - '0' : 0; //if num2 is not emmpty

            ans = to_string((carry + val1 + val2) % 10) + ans;
            carry = (carry + val1 + val2) / 10;
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

    string num1 = "956";
    string num2 = "77";

    cout << s.addStrings(num1, num2);
}