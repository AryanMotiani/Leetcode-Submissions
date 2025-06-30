class Solution {
public:
    int findLHS(vector<int>& nums) {
        map <int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int len=0;
        for(auto it=mp.begin();next(it)!=mp.end();it++){
            auto x=it;
            auto y=next(it);
            if(x->first+1==y->first) len=max(len,x->second+y->second);
        }
        return len;
    }
};