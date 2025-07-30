class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),l=0,len=1000000;
        vector<int> prf(n+1);
        prf[0]=0;
        prf[1]=nums[0];
        for(int i=2;i<n+1;i++){
            prf[i]=prf[i-1]+nums[i-1];
        }
        for(int r=0;r<n+1;r++){
            if(prf[r]-prf[l]>=target){
                while(l<=r && prf[r]-prf[l]>=target) l++;
                len=min(len,r-l+1);
            }
        }
        if(len==1000000) len=0;
        return len;
    }
};