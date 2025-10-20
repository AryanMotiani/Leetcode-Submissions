class Solution {
public:
    vector<long long> dp;
    int climbStairs(int n, vector<int>& costs) {
        if(dp.empty()) dp.assign(n + 1, -1); // cannot declare globally coz need to keep all values -1 but in leetcode it does not reset
    // main bug during coding: costs is 0 based indexed
        if(dp[n]!=-1) return dp[n];
        if(n==0) return dp[0]=0;
        if(n==1) return dp[1]=1+costs[0];
        if(n==2) return dp[2]=min(4+climbStairs(n-2,costs)+costs[n-1],1+climbStairs(n-1,costs)+costs[n-1]);
       
        long long c1=9+climbStairs(n-3,costs)+costs[n-1];
        long long c2=4+climbStairs(n-2,costs)+costs[n-1];
        long long c3=1+climbStairs(n-1,costs)+costs[n-1];
        return dp[n]=min(c1,min(c2,c3));
    }
};