class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size(),ans=0;
        vector <int> c;
        int len=1;
        for(int i=0;i<n;i++){
            if(nums[i]==1) {
                c.push_back(len);
                len=1;
            }
            else{
                len++;
            }
        }
        c.push_back(len);
        int l=0,r=goal;
       if(goal==0){
        for(auto i:c) ans+=((i-1)*i)/2;
        return ans;
       }
        while(r<c.size()){
            ans+=(c[l]*c[r]);
            r++;
            l++;
        }
        return ans;
    }
};