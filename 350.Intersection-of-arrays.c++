//https://leetcode.com/problems/intersection-of-two-arrays-ii/


//no sorting, using hashtable
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        map <int,int> m;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;//updating hastable with all elements and frequencies
        }
        
        vector <int> ans;
        
        for(int i=0;i<nums2.size();i++)
        {
            if(m[nums2[i]]!=0)//if frequency no 0 adding arr[i] to ans vector
            {
                ans.push_back(nums2[i]);
                m[nums2[i]]--;
            }
        }
        return ans;
    }
};
   //sorting to find intersection 
   /*vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        int i=0;
        int j=0;
        int size1=nums1.size();
        int size2= nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while(i<size1 && j<size2)
        {
            if(nums1[i]>nums2[j])
                j++;
            else if(nums1[i]<nums2[j])
                i++;
            else
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};*/
