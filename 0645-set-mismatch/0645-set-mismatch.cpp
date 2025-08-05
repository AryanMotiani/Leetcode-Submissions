class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size(),sum=0;
        unordered_map<int,int>cnt;
        int val;
        for(auto u:nums){
            cnt[u]++;
            if(cnt[u]==2){
                val=u;    
            }
            sum+=u;
        }
        int ans=abs(((n*(n+1))/2)-sum+val);
        return {val,ans};
    }
};