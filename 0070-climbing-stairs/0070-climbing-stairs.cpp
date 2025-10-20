int N=46;
vector<int> dp(N,-1);

class Solution {
public:

    int climbStairs(int n) {
        if(dp[n]!=-1) return dp[n];
        if(n==0) return 1;
        if(n==1) return 1;
        return dp[n]=climbStairs(n-1)+climbStairs(n-2);
    }
};