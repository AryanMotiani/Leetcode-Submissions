class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(),len=0,ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ans=max(len,ans);
                len=0;
            }
            else len++;
        }
        ans=max(len,ans);
        return ans;
    }
};