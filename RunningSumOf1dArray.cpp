#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans[i]=sum;
        }
        
        return ans;
        
    }
};

int main(){

    Solution s;
    vector<int> nums= {1,2,3,4}, ans;
    ans = s.runningSum(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

}