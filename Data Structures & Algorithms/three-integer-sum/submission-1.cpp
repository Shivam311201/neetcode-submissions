class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> sol;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0&&nums[i]==nums[i-1])
                continue;
            int target=-1*nums[i];
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                if(nums[j]+nums[k]==target)
                {
                    ans.insert({nums[i],nums[j],nums[k]});
                    j++,k--;
                }
                else if((nums[j]+nums[k])>target)
                    k--;
                else j++;
            }
        }
        for(auto it:ans)
            sol.push_back(it);
        return sol;
    }
};
