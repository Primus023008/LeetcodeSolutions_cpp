#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> result;

    void print(string digits, string input[], int i, string s)
    {
        if (i == digits.size())
        {
            result.push_back(s);
            return;
        }

        string val = input[digits[i] - '0'];

        for (int j = 0; j < val.size(); j++)
            print(digits, input, i + 1, s + val[j]);
    }

    vector<string> letterCombinations(string digits)
    {

        if (!digits.size())
        {
            return {};
        }
        string input[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        print(digits, input, 0, "");

        return result;
    }
};
int main()
{
    Solution s;
    string digits="23";

    vector<string> result= s.letterCombinations(digits);

    for(auto i: result){
        cout<<i<<" ";
    }
}