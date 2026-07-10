class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto it:strs)
        {
            vector<int> count(26,0);
            for(auto itr:it)
                count[itr-'a']+=1;
            string ans="";
            for(int i=0;i<26;i++)
                ans+=(count[i]+'0');
            mp[ans].push_back(it);
        }
        vector<vector<string>> ans;
        for(auto it:mp)
            ans.push_back(it.second);
        return ans;
    }
};
