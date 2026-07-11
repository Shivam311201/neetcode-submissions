class Solution {
public:
    int trap(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int ans=0, lmax=heights[i],rmax=heights[j];
        while(i<j)
        {
            if(lmax<rmax)
            {
                i++;
                lmax=max(lmax,heights[i]);
                ans+=(lmax-heights[i]);
            }
            else {
                j--;
                rmax=max(rmax,heights[j]);
                ans+=(rmax-heights[j]);
            }
        }
        return ans;
    }
};
