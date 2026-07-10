class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(auto it:nums)
            freq[it]+=1;
        int n=nums.size();
        vector<vector<int>> v(n+1);
        for(auto it:freq)
            v[it.second].push_back(it.first);
        
        vector<int> ans;
        for(int i=n;i>=0;i--)
        {
            for(auto it:v[i])
                if(k>0)
                {
                    ans.push_back(it);
                    k--;
                }
        }
        return ans;
    }
};
