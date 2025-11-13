class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n);
        dp[0]=nums[0];
        if(n>1) dp[1]=nums[1];
        if(n>2) dp[2]=nums[2]+nums[0];
        for(int i=3;i<n;i++){
            dp[i]=max(dp[i-2],dp[i-3])+nums[i];
        }
        return *max_element(dp.begin(),dp.end());
    }
};