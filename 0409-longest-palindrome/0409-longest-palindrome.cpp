class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map <char,int> mp;
        bool odd=false;
        for(int i=0;i<n;i++) mp[s[i]]++;
        int ans=0;
        for (auto x:mp){
            if(x.second%2==0) ans+=x.second;
            else{
                ans+=x.second-1;
                odd=true;
            }
        }
        if(odd) ans++;
        return ans;
    }
};