class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,bool> track;
        for(auto it:nums)
            track[it]=true;
        
        int ans=0;
        for(auto it:nums)
        {
            int count=1,start=it;
            while(track.find(start+1)!=track.end())
            {
                count+=1;
                start+=1;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};
