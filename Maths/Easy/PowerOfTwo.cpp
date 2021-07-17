#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // binary representation of any power of two is 1 as most significant bit(rightmost) followed by all zeroes
    // binary representation of a number less than it is all bits flipped
    // therefore, if bitwise & of a number with its predecessor gives 0, it is a power of 2;
    bool isPowerOfTwo(int n)
    {
        return (n > 0) && !(n & (n - 1));
    }
};

int main()
{
    Solution s;
    int n=16;

    cout<< (s.isPowerOfTwo(n)? "true":"false");
}