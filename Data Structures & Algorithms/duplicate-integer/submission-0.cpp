class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int,int> count;
       for(auto it:nums)
    {
        count[it]+=1;
        if(count[it]>1)
            return true;
    } 
    return false;
    }
};