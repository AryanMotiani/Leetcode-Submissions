class Solution {
    vector<long long> dp,c;
public:
    long long solve(long long amount){
        if(amount==0) return 0;
        if(amount<0)  return INT_MAX;
        if(dp[amount]!=-1) return dp[amount];
        long long ans=INT_MAX;
        for(int i=0;i<c.size();i++){
            ans=min(ans,1+solve(amount-c[i]));
        }
        return dp[amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        dp.assign(amount+1,-1);
        c.resize(coins.size());
        for(int i=0;i<coins.size();i++) c[i]=coins[i];
        long long a=amount;
        long long x=solve(amount);
        if(x>=INT_MAX) return -1;
        return x;
    }
};