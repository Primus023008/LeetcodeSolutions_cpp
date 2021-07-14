#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool valid(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    //main function
    bool validPalindrome(string s)
    {

        int st = 0;
        int end = s.length() - 1;

        while (st < end)
        {
            if (s[st] == s[end])
            {
                st++;
                end--;
            }
            else
            //if elements are not equal, we have two choices->
            //to increment start, or to decrement end
            //check if any of these changes makes a palindrome
            {
                return valid(s, st + 1, end) || valid(s, st, end - 1); 
            }
        }

        return true;
    }
};

int main()
{
    Solution s;
    string str = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";

    if (s.validPalindrome(str))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
