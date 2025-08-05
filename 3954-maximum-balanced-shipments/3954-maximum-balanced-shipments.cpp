class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int n=weight.size(),ans=0,mx=weight[0];
        for(int i=1;i<n;i++){
            if(weight[i]-mx<0){
                ans++;
                if(i<n-1) mx=weight[i+1];
                i++;
            }
            else{
                mx=max(mx,weight[i]);
            }
        }
        return ans;
    }
};