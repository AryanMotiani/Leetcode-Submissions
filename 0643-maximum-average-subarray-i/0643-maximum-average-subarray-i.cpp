class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double ans=INT_MIN,tmp=0;
        for(int i=0;i<k;i++){
            tmp+=nums[i];
        }
        ans=max(tmp,ans);
        for(int i=k;i<n;i++){
            tmp+=nums[i];
            tmp-=nums[i-k];
            ans=max(ans,tmp);
        }
        ans/=k;
        return ans;
    }
};