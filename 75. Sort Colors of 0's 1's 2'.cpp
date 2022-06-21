//https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low,mid,high;
        low=0;
        mid=0;
        high=nums.size()-1;
        while(mid<=high){
            switch(nums[mid])
            {
                case 0: swap(nums[low++],nums[mid++]); break;
                case 1: mid++; break;
                case 2: swap(nums[mid],nums[high--]); break;
            }
        }
    }
};
// Sol 2 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p0 = 0;
        int p1 = 0;
        int curr = 0;
        
        // scan 0
        for(p0 = curr; p0 < nums.size(); p0++) {
            if (nums[p0] == 0) {
                swap(nums[p0], nums[curr]);
                curr++;
            }
        }
        
        for(p1 = curr; p1 < nums.size(); p1++) {
            if (nums[p1] == 1) {
                swap(nums[p1], nums[curr]);
                curr++;
            }
        }
        
