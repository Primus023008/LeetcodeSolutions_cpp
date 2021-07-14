#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int count=0;
        
        for(int i=0, l=m;l<m+n && i<nums2.size();i++,l++){
            
            nums1.at(l) = nums2.at(i); //add all elements of nums2 to the end of nums1
            
        }
        
        sort(nums1.begin(),nums1.end());
        
       
         return nums1;   
        }
        
    };

int main(){

    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m=3, n=3;

    vector<int> ans = s.merge(nums1,m,nums2,n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}