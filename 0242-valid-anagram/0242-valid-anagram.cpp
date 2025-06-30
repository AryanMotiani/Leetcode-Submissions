class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size(),m=t.size();
        if(n!=m) return false;
        map <char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            --mp[t[i]];
            if (mp[t[i]]== 0) mp.erase(t[i]);
            if (mp[s[i]]== 0) mp.erase(s[i]); // these lies are important otherwise mp.empty() or mp.size()==0 won't work
        }
        if(mp.empty()) return true;
        return false;
    }
};