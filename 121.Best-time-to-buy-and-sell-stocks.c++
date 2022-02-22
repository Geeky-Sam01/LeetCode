//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int min=INT_MAX;
        int prof=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<min) min=a[i];            //use min()
            if(a[i]-min>prof) prof=a[i]-min;  //use max()
        }
        return prof;
    }
};
