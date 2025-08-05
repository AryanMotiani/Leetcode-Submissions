class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size(),k=3,ans=0;
        unordered_map<char,int> mp;
        for(int i=0;i<k;i++) mp[s[i]]++;
        if(mp.size()==3) ans++;
        for(int i=k;i<n;i++){
            mp[s[i]]++;
            mp[s[i-k]]--;
            if(mp[s[i-k]]==0) mp.erase(s[i-k]);
            if(mp.size()==3) ans++;
        }
        return ans;
    }
};