class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int ans=INT_MIN;
        int mn=1;
        int mx=mn;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int mx1=mx*x;
            mx=max(mx1,max(mn*x,x));
            mn=min(mx1,min(mn*x,x));
            if(mx>ans)ans=mx;
        }
        return ans;
    }
};