class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> pairs;
        for(int i=0;i<nums.size();i++)
            pairs.push_back({nums[i],i});
        sort(pairs.begin(),pairs.end());
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            if((pairs[i].first+pairs[j].first)==target)
            {
                if(pairs[i].second<pairs[j].second)
                    return {pairs[i].second,pairs[j].second};
                return {pairs[j].second,pairs[i].second};
            }
            if((pairs[i].first+pairs[j].first)>target)
                j--;
            else i++;
        }
        return {};
    }
};
