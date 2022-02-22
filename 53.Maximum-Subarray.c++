//https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN, currMax = 0;           
        for(int i=0;i<nums.size();i++){      
            currMax = currMax + nums[i];             
            if(nums[i]>currMax) currMax = nums[i];              
            if(currMax>res) res = currMax;           
        } 
        return res;
    }
};
