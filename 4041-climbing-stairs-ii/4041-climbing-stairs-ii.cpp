class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
       vector<int> dp(n+1);
       dp[0]=0;
       dp[1]=1+costs[0];
       if(n>1) dp[2]=min(4+dp[0],1+dp[1])+costs[1]; // costs has 0 based indexing unlike said in the Q
       for(int i=3;i<=n;i++){
            dp[i]=min(9+dp[i-3],min(4+dp[i-2],1+dp[i-1]))+costs[i-1];
       }
       return dp[n];
    }
};