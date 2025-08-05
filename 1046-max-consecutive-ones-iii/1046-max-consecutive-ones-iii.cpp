class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),l=0,cnt=0,ans=0,r=0;
        for(;r<n;r++){
           if(nums[r]==0 && cnt<k){
            cnt++;
           }
           else if(nums[r]==0 && cnt==k){
            while(l<=r && nums[l]==1){
                l++;
            }
            l++;
           }
           ans=max(ans,r-l+1);
        }
        return ans;
    }
};