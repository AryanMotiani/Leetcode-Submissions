class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans(n),prf(n+1),suf(n+1);
        prf[0]=1;
        for(int i=1;i<n+1;i++){
            prf[i]=prf[i-1]*nums[i-1];
        }
        suf[n]=1;
        for(int i=n-1;i>=0;i--){
            suf[i]=nums[i]*suf[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=prf[i]*suf[i+1];
        }
        return ans;
    }
};