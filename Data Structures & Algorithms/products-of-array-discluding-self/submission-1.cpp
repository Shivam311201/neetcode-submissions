class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);

        left[0]=nums[0];
        for(int i=1;i<n-1;i++)
            left[i]=left[i-1]*nums[i];
        
        vector<int> ans(n);
        ans[n-1]=left[n-2];
        int mul=nums[n-1];
        for(int i=n-2;i>0;i--)
        {
            ans[i]=left[i-1]*mul;
            mul*=nums[i];
        }
        ans[0]=mul;
        return ans;
    }
};
