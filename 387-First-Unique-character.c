//https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
int firstUniqChar(string s)//SAMMANNWAY
{
   unordered_map<char,int> m;
    for(auto i:s) m[i]++;//(S,1)(A,3)(M,2)(N,2)(Y,1)
    for(int i=0;i<s.length();i++)
    {
        if(m[s[i]]==1) return i;//S==1 return
    }
    return -1;
}
};
