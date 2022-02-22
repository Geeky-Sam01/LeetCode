//https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    map<int,int>table;
    for(int i=0;i<nums.size();i++){
        table[nums[i]]++;
        if(table[nums[i]]>1) return true;
    }
    return false;}
};
