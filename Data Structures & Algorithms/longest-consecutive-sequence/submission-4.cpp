class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> len;
        
        int ans=0;
        for(auto it:nums)
        {
            if(!len[it])
            {
                len[it]=len[it-1]+len[it+1]+1;
                len[it-len[it-1]]=len[it];
                len[it+len[it+1]]=len[it];
                ans=max(ans,len[it]);
            }
        }
        return ans;
    }
};
