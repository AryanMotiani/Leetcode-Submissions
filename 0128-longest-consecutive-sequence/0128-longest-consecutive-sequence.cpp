class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),len=0,mx=0,cur;
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        auto it=mp.begin();
        cur=it->first;
        for(auto x:mp){
            if(x.first==cur) len++;
            else if(cur+1==x.first) len++;
            else{
                mx=max(len,mx);
                len=1;
            }
            cur=x.first;
        }
        mx=max(len,mx);
        return mx;

    }
};