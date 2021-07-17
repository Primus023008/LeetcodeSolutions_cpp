#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char toChar(int n)
    {

        if (n == 0)
            return 'Z';

        return char(64 + n);
    }

    string convertToTitle(int columnNumber)
    {

        string str = "";

        while (columnNumber > 0)
        {

            char c = toChar(columnNumber % 26);
            if (columnNumber % 26 == 0)
            {
                columnNumber = (columnNumber / 26) - 1;
            }
            else
            {
                columnNumber /= 26;
            }
            str = c + str;
        }

        return str;
    }
};

int main()
{
    Solution s;
    int columnNumber= 2147483647;

    cout<<s.convertToTitle(columnNumber);
}