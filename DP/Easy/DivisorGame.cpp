#include <bits/stdc++.h>
using namespace std;

// for every odd number Alic gets, she can subtract one and give an odd number back.
// since odd numbers only have odd divisors, the other person can subtract an odd divisor from the odd number
// this in turn returns an even number,
// this process continues till alice gets 2, and she wins

class Solution {
public:
    bool divisorGame(int n) {
        return n%2==0;
    }
};

int main()
{
    Solution s;
    int n=3;

    if(s.divisorGame(n)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}