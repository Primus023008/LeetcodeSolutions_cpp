#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {

        vector<vector<int>> master(numRows);

        for (int i = 0; i < numRows; i++)
        {

            master[i] = vector<int>(i + 1); //number of elements in ith row = i+1

            for (int j = 0; j <= i; j++)
            {

                if (j == 0 || j == i) //insert 1 as first and last element
                {
                    master[i][j] = 1;
                }
                else
                {
                    master[i][j] = master[i - 1][j - 1] + master[i - 1][j]; //current element is sum of numbers with same index and one less index in above row
                }
            }
        }

        return master;
    }
};

int main()
{
    Solution s;
    int numRows= 5;
    vector<vector<int>> ans = s.generate(9); 

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < ans[i].size(); j++)     
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}