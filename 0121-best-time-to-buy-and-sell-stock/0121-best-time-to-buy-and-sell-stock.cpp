class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),mn=prices[0],maxdiff=0;
        for(int i=1;i<n;i++){
            mn=min(mn,prices[i]);
            maxdiff=max(maxdiff,prices[i]-mn);
        }
        return maxdiff;
    }
};