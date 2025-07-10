class Solution {
public:
    int titleToNumber(string columnTitle) {
        string s=columnTitle;
        int n=s.size(),ans=0;
        map<char,int> mp;
        char a='A';
        for(int i=1;i<=26;i++){
            mp[a]=i;
            a++;
        }
        for(int i=0;i<n;i++){
            ans*=26;
            ans+=mp[s[i]];
        }
        return ans;
    }
};