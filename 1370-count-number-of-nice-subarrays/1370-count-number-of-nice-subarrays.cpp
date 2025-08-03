class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size(),odd=1,ans=0;
        vector<int> p;
        
        for(int r=0;r<n;r++){
            if(nums[r]%2!=0) {
                p.push_back(odd);
                odd=1;
            }
            else odd++;
        }
        p.push_back(odd);

        for(int i=0;i<p.size();i++){
            if(i+k<p.size())
            ans+=p[i]*p[i+k];
        }
        return ans;
    }
};