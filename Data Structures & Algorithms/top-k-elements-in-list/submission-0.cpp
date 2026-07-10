class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(auto it:nums)
            count[it]+=1;
        vector<pair<int,int>> v;
        for(auto it:count)
            v.push_back({it.second,it.first});
        sort(v.rbegin(),v.rend());
        vector<int> ans;
        for(int i=0;i<k;i++)
           ans.push_back(v[i].second);
        return ans; 
    }
};
