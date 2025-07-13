class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),mx=0,curr=prices[0];
        for(int i=0;i<n;i++){
            curr=min(curr,prices[i]);
            if(prices[i]-curr>0){
                mx+=prices[i]-curr;
                if(i<n) curr=prices[i];
            }

        }
        return mx;
    }
};