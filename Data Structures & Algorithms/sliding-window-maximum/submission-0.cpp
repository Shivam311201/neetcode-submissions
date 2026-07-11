class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> nextGreater(n,-1),ans;
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&nums[st.top()]<nums[i])
            {
                nextGreater[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }

        int j=0;
        for(int i=0;i<n-k+1;i++)
        {
            if(j<i)
                j=i;
            int lim=i+k;
            while(nextGreater[j]!=-1&&nextGreater[j]<lim)
                j=nextGreater[j];
            ans.push_back(nums[j]);
        }
        return ans;
    }
};
