class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,bool> track,visited;
        for(auto it:nums)
            track[it]=true;
        
        int ans=0;
        for(auto it:nums)
        {
            if(visited[it])
                continue;
            int count=1,start=it;
            while(track.find(start+1)!=track.end())
            {
                visited[start+1]=true;
                count+=1;
                start+=1;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};
